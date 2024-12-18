using System.Runtime.InteropServices;

namespace UITest
{
    public partial class MainForm : Form
    {
        private Button currentButton;
        private Random random;
        private int tempIndex;

        private int borderSize = 2;
        private Size formSize;

        private Form currentForm;

        [DllImport("user32.DLL", EntryPoint = "ReleaseCapture")]
        private extern static void ReleaseCapture();
        [DllImport("user32.DLL", EntryPoint = "SendMessage")]
        private extern static void SendMessage(System.IntPtr hWnd, int wMsg, int wParam, int lParam);

        public MainForm()
        {
            InitializeComponent();

            random = new Random();

            this.Padding = new Padding(borderSize);
            this.BackColor = Color.FromArgb(240, 240, 240);
        }

        private Color SelectThemeColor()
        {
            int index = random.Next(ThemeColor.ColorList.Count);
            while(tempIndex == index)
            {
                index = random.Next(ThemeColor.ColorList.Count);
            }
            tempIndex = index;

            return ColorTranslator.FromHtml(ThemeColor.ColorList[index]);
        }

        private void ActivateButton(object buttonSender)
        {
            if(null != buttonSender)
            {
                if(currentButton != (Button)buttonSender)
                {
                    DisableButton();

                    Color color = SelectThemeColor();
                    currentButton = (Button)buttonSender;
                    currentButton.BackColor = color;
                    currentButton.ForeColor = Color.White;
                    currentButton.Font = new System.Drawing.Font("맑은 고딕", 12.5F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point);
                }
            }
        }

        private void DisableButton()
        {
            foreach(Control prevButton in menuPanel.Controls)
            {
                if(prevButton.GetType() == typeof(Button))
                {
                    prevButton.BackColor = Color.FromArgb(50, 52, 77);
                    prevButton.ForeColor = Color.Gainsboro;
                    prevButton.Font = new System.Drawing.Font("맑은 고딕", 10F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point);
                }
            }
        }

        public void OpenSubForm(Form subForm, object sender)
        {
            if(currentForm != null)
            {
                currentForm.Close();
            }

            ActivateButton(sender);
            currentForm = subForm;

            subForm.TopLevel = false;
            subForm.FormBorderStyle = FormBorderStyle.None;
            subForm.Dock = DockStyle.Fill;

            subFormPanel.Controls.Add(subForm);
            subFormPanel.Tag = subForm;

            subForm.BringToFront();
            subForm.Show();
        }

        private void FolderButton_Click(object sender, EventArgs e)
        {
            if (null != currentForm && currentForm.GetType() == typeof(SubForms.FolderListForm))
            {
                return;
            }
            SubForms.FolderListForm subForm = new SubForms.FolderListForm();
            subForm.notifyMainForm += FileSelectedFormFolderForm;
            OpenSubForm(subForm, sender);
        }

        private void FileSelectedFormFolderForm(string InFilePath)
        {
            SubForms.EditForm subForm = new SubForms.EditForm();

            OpenSubForm(subForm, editButton);

            subForm.FileSelected(InFilePath);
        }

        private void EditButton_Click(object sender, EventArgs e)
        {
            if(null != currentForm && currentForm.GetType() == typeof(SubForms.EditForm))
            {
                return;
            }
            OpenSubForm(new SubForms.EditForm(), sender);
        }

        private void SvnButton_Click(object sender, EventArgs e)
        {
            if (null != currentForm && currentForm.GetType() == typeof(SubForms.SvnForm))
            {
                return;
            }
            OpenSubForm(new SubForms.SvnForm(), sender);
        }

        private void PurgeButton_Click(object sender, EventArgs e)
        {
            if (null != currentForm && currentForm.GetType() == typeof(SubForms.PurgeForm))
            {
                return;
            }
            SubForms.PurgeForm subForm = new SubForms.PurgeForm();

            OpenSubForm(subForm, sender);
        }

        private void AccountButton_Click(object sender, EventArgs e)
        {
            if (null != currentForm && currentForm.GetType() == typeof(SubForms.AccountForm))
            {
                return;
            }
            SubForms.AccountForm subForm = new SubForms.AccountForm();

            OpenSubForm(subForm, sender);
        }

        private void SettingButton_Click(object sender, EventArgs e)
        {
            if (null != currentForm && currentForm.GetType() == typeof(SubForms.SettingForm))
            {
                return;
            }
            SubForms.SettingForm subForm = new SubForms.SettingForm();

            OpenSubForm(subForm, sender);
        }

        private void TitleBarPanel_MouseDown(object sender, MouseEventArgs e)
        {
            ReleaseCapture();
            SendMessage(this.Handle, 0x112, 0xf012, 0);
        }

        //Overridden methods
        protected override void WndProc(ref Message m)
        {
            const int WM_NCCALCSIZE = 0x0083;//Standar Title Bar - Snap Window
            if (m.Msg == WM_NCCALCSIZE && m.WParam.ToInt32() == 1)
            {
                return;
            }

            base.WndProc(ref m);
        }

        private void menuButton_Click(object sender, EventArgs e)
        {
            CollapseMenu();
        }

        private void CollapseMenu()
        {
            if (menuPanel.Width > 100)
            {
                menuPanel.Width = 100;
                menuButton.Text = "";
                menuButton.Dock = DockStyle.Top;
                menuButton.ImageAlign = ContentAlignment.MiddleCenter;
                foreach (Button button in menuPanel.Controls.OfType<Button>())
                {
                    button.Text = "";
                    button.ImageAlign = ContentAlignment.MiddleCenter;
                    button.Padding = new Padding(0, 0, 0, 0);
                }
            }
            else
            {
                menuPanel.Width = 150;
                menuButton.Text = menuButton.Tag.ToString();
                menuButton.Dock = DockStyle.None;
                foreach (Button button in menuPanel.Controls.OfType<Button>())
                {
                    button.Text = button.Tag.ToString();
                    button.ImageAlign = ContentAlignment.MiddleLeft;

                    button.Padding = new Padding(12, 0, 0, 0);
                }
            }
        }
        private void closeButton_Click(object sender, EventArgs e)
        {
            Application.Exit();
        }

        private void MainForm_Load(object sender, EventArgs e)
        {
            // 프로그램 시작 시, 저장된 정보를 파일에서 읽어오기.
            SharedData.LoadUserInfoFromFile();
        }
        private void MainForm_Cloes(object sender, FormClosedEventArgs e)
        {
            // 프로그램 종료 시, 저장된 정보를 파일에 저장.
            SharedData.SaveUserInfoToFile();
        }
    }
}