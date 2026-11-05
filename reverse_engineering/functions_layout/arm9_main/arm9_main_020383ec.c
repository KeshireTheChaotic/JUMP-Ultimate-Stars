
void FUN_020383ec(int *param_1,char *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((*param_2 == '$') || ((*param_2 == '0' && (param_2[1] == 'x' || param_2[1] == 'X')))) {
    iVar1 = FUN_0203837c(param_2,0);
    *param_1 = iVar1 << 0xc;
    return;
  }
  FUN_02005954(param_2);
  uVar2 = FUN_0200b6c4();
  FUN_0200c9e4(0x45800000,uVar2);
  iVar1 = FUN_0200c8e0();
  *param_1 = iVar1;
  return;
}

