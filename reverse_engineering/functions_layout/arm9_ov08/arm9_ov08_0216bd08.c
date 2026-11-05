
/* WARNING: Control flow encountered bad instruction data */

void FUN_0216bd08(undefined4 param_1,char param_2,char *param_3,undefined4 param_4)

{
  int unaff_r4;
  char unaff_r6;
  int unaff_r7;
  undefined4 in_lr;
  bool in_NG;
  bool in_CY;
  bool in_OV;
  undefined4 in_cr0;
  undefined4 in_cr2;
  undefined4 in_cr3;
  undefined4 in_cr5;
  undefined4 in_cr6;
  undefined4 in_cr7;
  undefined4 in_cr14;
  
  if (!in_OV) {
    unaff_r6 = -param_2;
  }
  if (in_NG) {
    unaff_r7 = 0xbc000 - (int)param_3;
  }
  if (in_OV) {
    unaff_r4 = unaff_r4 + -0x367;
    coprocessor_moveto(3,1,3,param_4,in_cr14,in_cr0);
    coprocessor_store(0xc,in_cr6,in_lr);
  }
  else {
    unaff_r6 = -param_2;
  }
  if (in_CY) {
    coprocessor_moveto(3,3,2,unaff_r7,in_cr2,in_cr5);
    coprocessor_function(3,6,3,in_cr7,in_cr3,in_cr14);
    *(char *)(unaff_r4 + -0x325) = (char)param_4;
  }
  else {
    *param_3 = unaff_r6;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

