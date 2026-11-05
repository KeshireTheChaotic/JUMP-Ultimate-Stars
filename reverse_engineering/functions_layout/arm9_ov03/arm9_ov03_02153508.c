
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02153508(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  
  uStack_24 = param_4;
  iVar1 = ALWidgetBaseImp::Create();
  *(undefined4 *)(*(int *)(iVar1 + 4) + 0x124) = 0x101;
  (**(code **)(**(int **)(iVar1 + 4) + 0xd8))(*(int **)(iVar1 + 4),1);
  *(int *)(param_1 + 0x3c) = iVar1;
  iVar1 = ALWidgetImp::Create(iVar1,_DAT_021d5154);
  (**(code **)(**(int **)(iVar1 + 4) + 0x24))(*(int **)(iVar1 + 4),param_1);
  func_0x021b65e8(*(undefined4 *)(iVar1 + 4),0x10,&LAB_02154a20);
  func_0x021b6760(*(undefined4 *)(iVar1 + 4),0x10,&DAT_02154ac4);
  FUN_02028384(*(undefined4 *)(iVar1 + 4),FUN_02154ac8);
  local_28 = 0x84000;
  FUN_02152730(iVar1,&local_28);
  (**(code **)(**(int **)(iVar1 + 4) + 0xd8))(*(int **)(iVar1 + 4),1);
  func_0x021b6214(*(undefined4 *)(iVar1 + 4),0);
  *(undefined4 *)(*(int *)(iVar1 + 4) + 0x124) = 3;
  local_30 = 0;
  local_2c = 0;
  FUN_0214e990(iVar1,&local_2c,&local_30);
  *(int *)(param_1 + 0x1a4) = iVar1;
  iVar4 = 0;
  do {
    if (iVar4 == 0) {
      iVar2 = 1;
    }
    else {
      iVar2 = 4;
    }
    iVar2 = *(int *)(param_1 + iVar2 * 4 + 0x20);
    piVar3 = *(int **)(iVar2 + 4);
    (**(code **)(*piVar3 + 0xd8))(piVar3,1);
    FUN_0214e908(iVar1,iVar2);
    iVar4 = iVar4 + 1;
  } while (iVar4 < 2);
  return;
}

