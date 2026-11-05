
/* WARNING: Control flow encountered bad instruction data */

void FUN_0216446c(int *param_1)

{
  int *piVar1;
  char in_NG;
  bool in_ZR;
  char in_OV;
  undefined4 in_cr0;
  undefined4 in_cr8;
  undefined4 in_cr11;
  
  piVar1 = param_1;
  if (!in_ZR) {
    piVar1 = param_1 + -0x100;
    *param_1 = (int)piVar1;
  }
  if (in_NG != in_OV) {
    coprocessor_loadlong(0,in_cr11,piVar1);
  }
  if (!in_ZR) {
    coprocessor_movefromRt(7,2,3,in_cr8,in_cr0);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

