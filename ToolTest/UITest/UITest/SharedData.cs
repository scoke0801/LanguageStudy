using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace UITest
{
    public static class SharedData
    {
        // 공통 데이터 필드
        private static string _selectedFilePath = "";

        private static string _userSvnId = "";
        private static string _userSvnPassword = "";

        public static string UserSvnID { get { return _userSvnId; } }
        public static string UserSvnPassword { get { return _userSvnPassword; } }

        // 데이터 접근 속성
        public static string SelectedFilePath
        {
            set
            {
                _selectedFilePath = value;

                OnChanged_SelectedFilePath?.Invoke(null, EventArgs.Empty);
            }
        }

        public static void SaveUserInfo(string Id, string passWord)
        {
            _userSvnId = Id;
            _userSvnPassword = passWord;
        }

        // 데이터 변경 이벤트
        public static event EventHandler OnChanged_SelectedFilePath;
    }
}
