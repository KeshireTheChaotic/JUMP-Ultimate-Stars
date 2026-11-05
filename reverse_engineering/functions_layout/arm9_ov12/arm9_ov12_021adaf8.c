
void FUN_021adaf8(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined1 local_18;
  
  iVar3 = *(int *)(*(int *)(*(int *)(param_1 + 0x15c) + 8) + 0x20) + param_2 * 0x24;
  uVar1 = FUN_021ac358(iVar3 + 8);
  iVar2 = FUN_02004b04(param_3);
  FUN_021ac3ec(iVar3 + 8,0,uVar1,param_3,param_3 + iVar2,local_18);
  iVar2 = *(int *)(iVar3 + 0x14);
  if (iVar2 != 0) {
    FUN_021ac3c4(iVar2);
    FUN_0201b244(iVar2);
    *(undefined4 *)(iVar3 + 0x14) = 0;
  }
  *(undefined1 *)(*(int *)(param_1 + 100) + 0x40) = 1;
  return;
}

