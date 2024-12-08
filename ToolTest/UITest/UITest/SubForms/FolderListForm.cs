using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace UITest.SubForms
{
    public partial class FolderListForm : Form
    {
        string currentPath = AppDomain.CurrentDomain.BaseDirectory;
        string selectedFilePath = string.Empty;

        public Action<string> notifyMainForm;

        public FolderListForm()
        {
            InitializeComponent();
        }

        private void LoadButton_Click(object sender, EventArgs e)
        {
            using (FolderBrowserDialog folderDialog = new FolderBrowserDialog())
            {
                // 초기 경로 설정
                string currentPath = AppDomain.CurrentDomain.BaseDirectory;
                folderDialog.SelectedPath = currentPath;

                if (folderDialog.ShowDialog() == DialogResult.OK)
                {
                    currentPath = folderDialog.SelectedPath;
                    folderPathLabel.Text = folderDialog.SelectedPath;
                    LoadFiles(folderDialog.SelectedPath);
                }
            }
        }

        private void LoadFiles(string folderPath)
        {
            fileList.Items.Clear();
            try
            {
                // 하위 폴더의 파일까지 모두 가져오기
                string[] files = Directory.GetFiles(folderPath, "*.cs", SearchOption.AllDirectories);

                foreach (string file in files)
                {
                    fileList.Items.Add(file); // 전체 경로를 표시
                }
            }
            catch (Exception ex)
            {
                MessageBox.Show($"폴더 목록을 불러오는데 실패하였습니다.: {ex.Message}", "에러", MessageBoxButtons.OK, MessageBoxIcon.Error);
            }
        }

        private void fileList_SelectedIndexChanged(object sender, EventArgs e)
        {
            selectedFilePath = (string)fileList.Items[fileList.SelectedIndex];

            try
            {
                // 파일 내용 읽기
                string fileContent = File.ReadAllText(selectedFilePath);
                previewTextBox.Text = fileContent;
            }
            catch (Exception ex)
            {
                MessageBox.Show($"파일 읽기 실패: {ex.Message}", "에러", MessageBoxButtons.OK, MessageBoxIcon.Error);
            }
        }

        private void FolderListForm_Load(object sender, EventArgs e)
        {

        }

        private void saveButton_Click(object sender, EventArgs e)
        {
            if (!string.IsNullOrEmpty(selectedFilePath))
            {
                try
                {
                    // 수정된 내용 저장
                    File.WriteAllText(selectedFilePath, previewTextBox.Text);
                    MessageBox.Show("파일 저장 성공", "안내", MessageBoxButtons.OK, MessageBoxIcon.Information);
                }
                catch (Exception ex)
                {
                    MessageBox.Show($"파일 저장 실패: {ex.Message}", "에러", MessageBoxButtons.OK, MessageBoxIcon.Error);
                }
            }
        }

        private void fileSelectButton_Click(object sender, EventArgs e)
        {
            notifyMainForm?.Invoke(selectedFilePath);
        }
    }
}
