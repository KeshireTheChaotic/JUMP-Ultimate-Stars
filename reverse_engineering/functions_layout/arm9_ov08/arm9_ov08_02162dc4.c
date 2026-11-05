
/* WARNING: Control flow encountered bad instruction data */

void FUN_02162dc4(uint param_1,uint param_2)

{
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  undefined4 unaff_r7;
  undefined4 unaff_r9;
  undefined4 unaff_r10;
  uint in_r12;
  int in_lr;
  bool in_CY;
  
  *(undefined4 *)(in_lr + -4) = 0x2162dcc;
  *(int *)(in_lr + -8) = in_lr;
  *(BADSPACEBASE **)(in_lr + -0xc) = register0x00000054;
  *(uint *)(in_lr + -0x10) = in_r12;
  *(undefined4 *)(in_lr + -0x14) = unaff_r10;
  *(undefined4 *)(in_lr + -0x18) = unaff_r9;
  *(undefined4 *)(in_lr + -0x1c) = unaff_r7;
  *(undefined4 *)(in_lr + -0x20) = unaff_r6;
  *(undefined4 *)(in_lr + -0x24) = unaff_r5;
  *(undefined4 *)(in_lr + -0x28) = unaff_r4;
  *(uint *)(in_lr + -0x2c) = param_1;
  if (!in_CY) {
    param_2 = in_r12 & param_1 >> (in_r12 & 0xff);
  }
  func_0x040a0856(param_1,param_2);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

