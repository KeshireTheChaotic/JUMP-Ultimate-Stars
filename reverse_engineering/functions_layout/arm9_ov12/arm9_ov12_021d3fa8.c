
/* WARNING: Control flow encountered bad instruction data */

void FUN_021d3fa8(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  int unaff_r7;
  int unaff_r9;
  int *in_lr;
  char in_NG;
  bool in_OV;
  undefined4 in_cr6;
  undefined4 in_cr9;
  undefined4 in_cr12;
  undefined4 in_cr14;
  undefined4 in_cr15;
  undefined1 auStack_10c [268];
  
  *in_lr = param_3;
  in_lr[1] = param_4;
  in_lr[2] = unaff_r7;
  in_lr[3] = unaff_r9;
  in_lr[4] = (int)in_lr;
  in_lr[5] = 0x21d3fb0;
  coprocessor_load2(9,in_cr12,param_4);
  if ((bool)in_NG != in_OV) {
    coprocessor_store(10,in_cr14,param_3 + 0x208);
  }
  if (in_OV) {
    coprocessor_storelong(0xf,in_cr6,auStack_10c);
    coprocessor_function(0xe,4,3,in_cr6,in_cr9,in_cr15);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

