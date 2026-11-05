
void FUN_02159c04(int param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  if (param_1 == 0) {
    return;
  }
  iVar2 = param_2 * 0xc + 0x215d554;
  iVar1 = *(int *)(iVar2 + param_3 * 4);
  if (iVar1 < 0) {
    return;
  }
  func_0x021bd730(param_1,iVar1,0,iVar2,param_4);
  return;
}

