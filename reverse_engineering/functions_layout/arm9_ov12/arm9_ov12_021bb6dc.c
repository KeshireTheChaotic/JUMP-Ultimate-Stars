
void FUN_021bb6dc(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  iVar1 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  switch(*(undefined1 *)(iVar1 + 0x9c)) {
  case 0:
    break;
  case 1:
    FUN_021bbe54(iVar1,0);
    goto LAB_021bb7dc;
  case 2:
    FUN_021bbe54(iVar1,1);
    goto LAB_021bb7dc;
  case 3:
    break;
  case 4:
    break;
  case 5:
    goto LAB_021bb7dc;
  case 6:
    goto LAB_021bb7dc;
  }
  iVar2 = 0;
  do {
    FUN_021b65d8(*(undefined4 *)(*(int *)(iVar1 + iVar2 * 4 + 0x48) + 4));
    uStack_2c = 0;
    uStack_30 = 0x100000;
    FUN_021bb970(*(undefined4 *)(iVar1 + iVar2 * 4 + 0x48),&uStack_30,&uStack_2c);
    iVar2 = iVar2 + 1;
  } while (iVar2 < 3);
  uStack_24 = 0;
  uStack_28 = 0;
  FUN_021bb970(*(undefined4 *)(iVar1 + 0x40),&uStack_28,&uStack_24);
  FUN_021b65e0(*(undefined4 *)(*(int *)(iVar1 + 0x40) + 4));
  FUN_021b6214(*(undefined4 *)(*(int *)(iVar1 + 0x40) + 4),1);
  FUN_021b65e0(*(undefined4 *)(*(int *)(iVar1 + 0x44) + 4));
  FUN_021b6214(*(undefined4 *)(*(int *)(iVar1 + 0x44) + 4),1);
LAB_021bb7dc:
  FUN_02028384(*(undefined4 *)(param_1 + 4),FUN_021bb7f4);
  return;
}

