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
    public partial class EditForm : Form
    {
        private string selectedFilePath = string.Empty;

        public EditForm()
        {
            InitializeComponent();
        }

        public void FileSelected(string filePath)
        {
            selectedFilePath = filePath;

            try
            {
                // 파일 내용 읽기
                string fileContent = File.ReadAllText(selectedFilePath);
                fileTextBox.Text = fileContent;
            }
            catch (Exception ex)
            {
                MessageBox.Show($"파일 읽기 실패: {ex.Message}", "에러", MessageBoxButtons.OK, MessageBoxIcon.Error);
            }
        }
    }
}
