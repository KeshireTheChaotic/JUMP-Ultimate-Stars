
/* WARNING: Control flow encountered bad instruction data */

void FUN_02161bac(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int unaff_r4;
  char cVar1;
  char *in_lr;
  char *pcVar2;
  bool in_OV;
  undefined1 uVar3;
  undefined4 in_cr4;
  undefined4 in_cr15;
  
  if (in_OV) {
    in_lr = *(char **)(param_4 + -4);
    coprocessor_moveto(9,3,3,*(undefined4 *)(param_4 + -0x1c),in_cr15,in_cr4);
    cVar1 = (char)*(undefined4 *)(param_4 + -0x1c);
    uVar3 = true;
  }
  else {
    uVar3 = SBORROW4(unaff_r4 >> 0x12,param_4);
    cVar1 = (char)(unaff_r4 >> 0x12) - (char)param_4;
  }
  if ((bool)uVar3) {
    pcVar2 = (char *)0x2161bcc;
    func_0x03e3c48c(param_1);
  }
  else {
    pcVar2 = in_lr + -0xf66;
    *in_lr = cVar1;
  }
  if (!(bool)uVar3) {
    *pcVar2 = cVar1;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

