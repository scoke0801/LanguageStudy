using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using Newtonsoft.Json;
using Newtonsoft.Json.Linq;
using static System.Windows.Forms.VisualStyles.VisualStyleElement.Window;

namespace UITest
{
    public static class SharedData
    {
        // 공통 데이터 필드
        private static string _selectedFilePath = "";

        private static string _userSvnId = "";
        private static string _userSvnPassword = "";

        public static string UserSvnID { get { return _userInfo.userSvnId; } }
        public static string UserSvnPassword { get { return _userInfo.userSvnPassword; } }

        class UserInfo
        {
            public string userSvnId = "";
            public string userSvnPassword = "";

            public bool optionAutoCommitMessgae;
        }
        private static UserInfo _userInfo = new UserInfo();

        // 데이터 접근 속성
        public static string SelectedFilePath
        {
            set
            {
                _selectedFilePath = value;

                OnChanged_SelectedFilePath?.Invoke(null, EventArgs.Empty);
            }
        }

        public static void SaveSvnUserInfo(string Id, string passWord)
        {
            _userSvnId = Id;
            _userSvnPassword = passWord;
        }

        public static void SaveUserInfoToFile()
        {
            string currentPath = AppDomain.CurrentDomain.BaseDirectory;
            string fileName = "userInfo.json";

            using (StreamWriter writter = new StreamWriter(currentPath + fileName, false, Encoding.UTF8))
            {
                string json = JsonConvert.SerializeObject(_userInfo, Formatting.Indented);
                writter.Write(json);
            }

        }
        public static void LoadUserInfoFromFile()
        {
            string currentPath = AppDomain.CurrentDomain.BaseDirectory;
            string fileName = "userInfo.json";

            if (File.Exists(currentPath + fileName))
            {
                string jsonString = File.ReadAllText(currentPath + fileName);
                _userInfo = JsonConvert.DeserializeObject<UserInfo>(jsonString);
            }
        }

        // 데이터 변경 이벤트
        public static event EventHandler OnChanged_SelectedFilePath;
    }
}
