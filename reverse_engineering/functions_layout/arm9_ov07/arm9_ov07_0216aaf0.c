
/* WARNING: Control flow encountered bad instruction data */

void FUN_0216aaf0(undefined4 param_1,undefined1 *param_2,undefined4 param_3)

{
  undefined4 unaff_r4;
  undefined1 unaff_r5;
  bool in_OV;
  undefined4 in_cr5;
  undefined4 in_cr6;
  undefined1 auStack_10c [268];
  
  if (in_OV) {
    coprocessor_storelong(0xf,in_cr6,auStack_10c);
    coprocessor_moveto(0xd,3,3,unaff_r4,in_cr5,in_cr5);
    coprocessor_loadlong(7,in_cr5,param_3);
  }
  else {
    *param_2 = unaff_r5;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

