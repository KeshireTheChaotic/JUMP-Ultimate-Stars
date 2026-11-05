
/* WARNING: Control flow encountered bad instruction data */

void FUN_0216baa0(undefined4 param_1,char param_2,undefined1 *param_3)

{
  char unaff_r6;
  undefined1 unaff_r7;
  int in_lr;
  bool in_CY;
  bool in_OV;
  
  if (!in_OV) {
    unaff_r6 = -param_2;
  }
  if (!in_CY) {
    *param_3 = unaff_r7;
  }
  if (in_OV) {
    *(char *)(in_lr + -0xf4e) = unaff_r6;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

