
/* WARNING: Control flow encountered bad instruction data */

void FUN_0215efa0(int *param_1,undefined4 param_2,int param_3)

{
  int unaff_r4;
  int unaff_r7;
  int unaff_r8;
  int unaff_r9;
  int *unaff_r10;
  int in_r12;
  int in_lr;
  bool in_NG;
  bool in_OV;
  undefined4 in_cr0;
  undefined4 in_cr2;
  undefined4 in_cr6;
  
  *unaff_r10 = (int)param_1;
  unaff_r10[1] = param_3;
  unaff_r10[2] = unaff_r4;
  unaff_r10[3] = unaff_r8;
  unaff_r10[4] = unaff_r9;
  unaff_r10[5] = (int)unaff_r10;
  unaff_r10[6] = in_r12;
  unaff_r10[7] = (int)register0x00000054;
  unaff_r10[8] = in_lr;
  unaff_r10[9] = 0x215efa8;
  if (in_NG) {
    in_lr = *(int *)(unaff_r4 + -4);
    unaff_r9 = *(int *)(unaff_r4 + -0x10);
    unaff_r7 = *(int *)(unaff_r4 + -0x14);
  }
  if (in_OV) {
    coprocessor_function(8,4,2,in_cr6,in_cr0,in_cr0);
    coprocessor_function(8,9,0,in_cr6,in_cr2,in_cr2);
    *param_1 = unaff_r4;
    param_1[1] = unaff_r7;
    param_1[2] = unaff_r8;
    param_1[3] = unaff_r9;
    param_1[4] = (int)(unaff_r10 + 10);
    param_1[5] = in_lr;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

