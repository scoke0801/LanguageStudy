namespace UITest.SubForms
{
    partial class SvnForm
    {
        /// <summary>
        /// Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Clean up any resources being used.
        /// </summary>
        /// <param name="disposing">true if managed resources should be disposed; otherwise, false.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows Form Designer generated code

        /// <summary>
        /// Required method for Designer support - do not modify
        /// the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            this.panel8 = new System.Windows.Forms.Panel();
            this.panel1 = new System.Windows.Forms.Panel();
            this.panel2 = new System.Windows.Forms.Panel();
            this.label1 = new System.Windows.Forms.Label();
            this.selectedFile = new System.Windows.Forms.TextBox();
            this.fileSelectButton = new System.Windows.Forms.Button();
            this.commitButton = new System.Windows.Forms.Button();
            this.panel3 = new System.Windows.Forms.Panel();
            this.textBox1 = new System.Windows.Forms.TextBox();
            this.label2 = new System.Windows.Forms.Label();
            this.button2 = new System.Windows.Forms.Button();
            this.checkoutButton = new System.Windows.Forms.Button();
            this.panel4 = new System.Windows.Forms.Panel();
            this.panel5 = new System.Windows.Forms.Panel();
            this.label7 = new System.Windows.Forms.Label();
            this.repoPath = new System.Windows.Forms.TextBox();
            this.panel8.SuspendLayout();
            this.panel1.SuspendLayout();
            this.panel3.SuspendLayout();
            this.panel4.SuspendLayout();
            this.SuspendLayout();
            // 
            // panel8
            // 
            this.panel8.Controls.Add(this.panel1);
            this.panel8.Controls.Add(this.fileSelectButton);
            this.panel8.Location = new System.Drawing.Point(35, 12);
            this.panel8.Name = "panel8";
            this.panel8.Size = new System.Drawing.Size(715, 125);
            this.panel8.TabIndex = 3;
            // 
            // panel1
            // 
            this.panel1.Controls.Add(this.panel2);
            this.panel1.Controls.Add(this.label1);
            this.panel1.Controls.Add(this.selectedFile);
            this.panel1.Location = new System.Drawing.Point(15, 61);
            this.panel1.Name = "panel1";
            this.panel1.Size = new System.Drawing.Size(589, 51);
            this.panel1.TabIndex = 4;
            // 
            // panel2
            // 
            this.panel2.BackColor = System.Drawing.Color.FromArgb(((int)(((byte)(50)))), ((int)(((byte)(52)))), ((int)(((byte)(77)))));
            this.panel2.Location = new System.Drawing.Point(123, 44);
            this.panel2.Name = "panel2";
            this.panel2.Size = new System.Drawing.Size(450, 1);
            this.panel2.TabIndex = 2;
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.Font = new System.Drawing.Font("맑은 고딕", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point);
            this.label1.ForeColor = System.Drawing.Color.FromArgb(((int)(((byte)(50)))), ((int)(((byte)(52)))), ((int)(((byte)(77)))));
            this.label1.Location = new System.Drawing.Point(3, 17);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(118, 21);
            this.label1.TabIndex = 0;
            this.label1.Text = "커밋 대상 파일";
            // 
            // selectedFile
            // 
            this.selectedFile.BackColor = System.Drawing.SystemColors.ButtonFace;
            this.selectedFile.BorderStyle = System.Windows.Forms.BorderStyle.None;
            this.selectedFile.Font = new System.Drawing.Font("맑은 고딕", 15F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point);
            this.selectedFile.ForeColor = System.Drawing.Color.FromArgb(((int)(((byte)(50)))), ((int)(((byte)(52)))), ((int)(((byte)(77)))));
            this.selectedFile.Location = new System.Drawing.Point(123, 11);
            this.selectedFile.Name = "selectedFile";
            this.selectedFile.Size = new System.Drawing.Size(450, 27);
            this.selectedFile.TabIndex = 1;
            // 
            // fileSelectButton
            // 
            this.fileSelectButton.BackColor = System.Drawing.Color.FromArgb(((int)(((byte)(50)))), ((int)(((byte)(52)))), ((int)(((byte)(77)))));
            this.fileSelectButton.FlatStyle = System.Windows.Forms.FlatStyle.Flat;
            this.fileSelectButton.Font = new System.Drawing.Font("맑은 고딕", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point);
            this.fileSelectButton.ForeColor = System.Drawing.Color.Gainsboro;
            this.fileSelectButton.Location = new System.Drawing.Point(610, 71);
            this.fileSelectButton.Name = "fileSelectButton";
            this.fileSelectButton.Size = new System.Drawing.Size(102, 35);
            this.fileSelectButton.TabIndex = 7;
            this.fileSelectButton.Text = "파일 선택";
            this.fileSelectButton.UseVisualStyleBackColor = false;
            this.fileSelectButton.Click += new System.EventHandler(this.fileSelectButton_Click);
            // 
            // commitButton
            // 
            this.commitButton.BackColor = System.Drawing.Color.FromArgb(((int)(((byte)(50)))), ((int)(((byte)(52)))), ((int)(((byte)(77)))));
            this.commitButton.FlatStyle = System.Windows.Forms.FlatStyle.Flat;
            this.commitButton.Font = new System.Drawing.Font("맑은 고딕", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point);
            this.commitButton.ForeColor = System.Drawing.Color.Gainsboro;
            this.commitButton.Location = new System.Drawing.Point(648, 434);
            this.commitButton.Name = "commitButton";
            this.commitButton.Size = new System.Drawing.Size(102, 35);
            this.commitButton.TabIndex = 5;
            this.commitButton.Text = "커밋";
            this.commitButton.UseVisualStyleBackColor = false;
            this.commitButton.Click += new System.EventHandler(this.commitButton_Click);
            // 
            // panel3
            // 
            this.panel3.Controls.Add(this.textBox1);
            this.panel3.Controls.Add(this.label2);
            this.panel3.Location = new System.Drawing.Point(35, 143);
            this.panel3.Name = "panel3";
            this.panel3.Size = new System.Drawing.Size(715, 285);
            this.panel3.TabIndex = 6;
            // 
            // textBox1
            // 
            this.textBox1.Location = new System.Drawing.Point(18, 47);
            this.textBox1.Multiline = true;
            this.textBox1.Name = "textBox1";
            this.textBox1.ScrollBars = System.Windows.Forms.ScrollBars.Vertical;
            this.textBox1.Size = new System.Drawing.Size(684, 238);
            this.textBox1.TabIndex = 1;
            // 
            // label2
            // 
            this.label2.AutoSize = true;
            this.label2.Font = new System.Drawing.Font("맑은 고딕", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point);
            this.label2.Location = new System.Drawing.Point(18, 13);
            this.label2.Name = "label2";
            this.label2.Size = new System.Drawing.Size(96, 21);
            this.label2.TabIndex = 0;
            this.label2.Text = "커밋 메시지";
            // 
            // button2
            // 
            this.button2.BackColor = System.Drawing.Color.FromArgb(((int)(((byte)(50)))), ((int)(((byte)(52)))), ((int)(((byte)(77)))));
            this.button2.FlatStyle = System.Windows.Forms.FlatStyle.Flat;
            this.button2.Font = new System.Drawing.Font("맑은 고딕", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point);
            this.button2.ForeColor = System.Drawing.Color.Gainsboro;
            this.button2.Location = new System.Drawing.Point(540, 434);
            this.button2.Name = "button2";
            this.button2.Size = new System.Drawing.Size(102, 35);
            this.button2.TabIndex = 7;
            this.button2.Text = "업데이트";
            this.button2.UseVisualStyleBackColor = false;
            // 
            // checkoutButton
            // 
            this.checkoutButton.BackColor = System.Drawing.Color.FromArgb(((int)(((byte)(50)))), ((int)(((byte)(52)))), ((int)(((byte)(77)))));
            this.checkoutButton.FlatStyle = System.Windows.Forms.FlatStyle.Flat;
            this.checkoutButton.Font = new System.Drawing.Font("맑은 고딕", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point);
            this.checkoutButton.ForeColor = System.Drawing.Color.Gainsboro;
            this.checkoutButton.Location = new System.Drawing.Point(432, 434);
            this.checkoutButton.Name = "checkoutButton";
            this.checkoutButton.Size = new System.Drawing.Size(102, 35);
            this.checkoutButton.TabIndex = 8;
            this.checkoutButton.Text = "체크아웃";
            this.checkoutButton.UseVisualStyleBackColor = false;
            // 
            // panel4
            // 
            this.panel4.Controls.Add(this.panel5);
            this.panel4.Controls.Add(this.label7);
            this.panel4.Controls.Add(this.repoPath);
            this.panel4.Location = new System.Drawing.Point(50, 15);
            this.panel4.Name = "panel4";
            this.panel4.Size = new System.Drawing.Size(589, 51);
            this.panel4.TabIndex = 3;
            // 
            // panel5
            // 
            this.panel5.BackColor = System.Drawing.Color.FromArgb(((int)(((byte)(50)))), ((int)(((byte)(52)))), ((int)(((byte)(77)))));
            this.panel5.Location = new System.Drawing.Point(123, 44);
            this.panel5.Name = "panel5";
            this.panel5.Size = new System.Drawing.Size(450, 1);
            this.panel5.TabIndex = 2;
            // 
            // label7
            // 
            this.label7.AutoSize = true;
            this.label7.Font = new System.Drawing.Font("맑은 고딕", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point);
            this.label7.ForeColor = System.Drawing.Color.FromArgb(((int)(((byte)(50)))), ((int)(((byte)(52)))), ((int)(((byte)(77)))));
            this.label7.Location = new System.Drawing.Point(3, 17);
            this.label7.Name = "label7";
            this.label7.Size = new System.Drawing.Size(96, 21);
            this.label7.TabIndex = 0;
            this.label7.Text = "저장소 경로";
            // 
            // repoPath
            // 
            this.repoPath.BackColor = System.Drawing.SystemColors.ButtonFace;
            this.repoPath.BorderStyle = System.Windows.Forms.BorderStyle.None;
            this.repoPath.Font = new System.Drawing.Font("맑은 고딕", 15F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point);
            this.repoPath.ForeColor = System.Drawing.Color.FromArgb(((int)(((byte)(50)))), ((int)(((byte)(52)))), ((int)(((byte)(77)))));
            this.repoPath.Location = new System.Drawing.Point(123, 11);
            this.repoPath.Name = "repoPath";
            this.repoPath.Size = new System.Drawing.Size(450, 27);
            this.repoPath.TabIndex = 1;
            // 
            // SvnForm
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(7F, 15F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(904, 481);
            this.Controls.Add(this.panel4);
            this.Controls.Add(this.checkoutButton);
            this.Controls.Add(this.button2);
            this.Controls.Add(this.panel3);
            this.Controls.Add(this.panel8);
            this.Controls.Add(this.commitButton);
            this.Name = "SvnForm";
            this.Text = "SvnForm";
            this.panel8.ResumeLayout(false);
            this.panel1.ResumeLayout(false);
            this.panel1.PerformLayout();
            this.panel3.ResumeLayout(false);
            this.panel3.PerformLayout();
            this.panel4.ResumeLayout(false);
            this.panel4.PerformLayout();
            this.ResumeLayout(false);

        }

        #endregion

        private Panel panel8;
        private Button fileSelectButton;
        private Button commitButton;
        private Panel panel3;
        private TextBox textBox1;
        private Label label2;
        private Button button2;
        private Button checkoutButton;
        private Panel panel4;
        private Panel panel5;
        private Label label7;
        private TextBox repoPath;
        private Panel panel1;
        private Panel panel2;
        private Label label1;
        private TextBox selectedFile;
    }
}