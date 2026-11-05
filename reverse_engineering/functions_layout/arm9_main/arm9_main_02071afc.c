
void FUN_02071afc(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = iRam020b4114;
  if (iRam020b4114 != param_1) {
    if (param_2 != 0) {
      DAT_020b02ac = 1;
    }
    iRam020b4114 = param_1;
    FUN_02073114(0x3e5c,4,iVar1,0x20b4114,param_4);
  }
  return;
}

