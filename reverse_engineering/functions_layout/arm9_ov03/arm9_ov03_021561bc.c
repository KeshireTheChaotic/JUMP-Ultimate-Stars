
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_021561bc(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  
  uStack_24 = param_4;
  iVar1 = ALWidgetBaseImp::Create();
  (**(code **)(**(int **)(iVar1 + 4) + 0xd8))(*(int **)(iVar1 + 4),1);
  *(undefined4 *)(*(int *)(iVar1 + 4) + 0x124) = 0x100;
  func_0x021b6214(*(undefined4 *)(iVar1 + 4),0);
  *(int *)(param_1 + 0x34) = iVar1;
  local_2c = 0x100;
  local_28 = 0xc0;
  iVar2 = FUN_0203b3f4();
  iVar2 = ALWidgetImp::Create(iVar1,*(undefined4 *)(iVar2 + 0x88),0x510000,0x16,0x20,&local_2c);
  func_0x021b6214(*(undefined4 *)(iVar2 + 4),0);
  (**(code **)(**(int **)(iVar2 + 4) + 0xd8))(*(int **)(iVar2 + 4),1);
  *(undefined1 *)(*(int *)(iVar2 + 4) + 0xaa) = 1;
  *(undefined1 *)(*(int *)(iVar2 + 4) + 0xab) = 0;
  func_0x021b77a8(*(undefined4 *)(iVar2 + 4),0x10);
  (**(code **)(**(int **)(iVar2 + 4) + 0x24))(*(int **)(iVar2 + 4),param_1);
  uVar3 = FUN_0214e81c(0,&DAT_0215e46c,&DAT_02093c8c);
  FUN_02020e98(iVar2,uVar3);
  func_0x021b65e8(*(undefined4 *)(iVar2 + 4),4,&LAB_02158670);
  func_0x021b6760(*(undefined4 *)(iVar2 + 4),4,FUN_02158688);
  FUN_02023894(*(undefined4 *)(iVar2 + 4),0x510014,0);
  func_0x021b3f78(*(undefined4 *)(iVar2 + 4),0x510014);
  func_0x021b3fc4(*(undefined4 *)(iVar2 + 4),0x510015);
  *(undefined4 *)(*(int *)(iVar2 + 4) + 0x124) = 2;
  *(int *)(param_1 + 0x94) = iVar2;
  local_2c = 0x80;
  local_28 = 0;
  iVar2 = FUN_0203b404();
  iVar2 = ALWidgetImp::Create(iVar1,*(undefined4 *)(iVar2 + 0x88),0x840000,
                              *(undefined4 *)(&DAT_0215d520 + (uint)*(byte *)(param_1 + 2) * 4),0x20
                              ,&local_2c);
  (**(code **)(**(int **)(iVar2 + 4) + 0xd8))(*(int **)(iVar2 + 4),1);
  func_0x021b6214(*(undefined4 *)(iVar2 + 4),0);
  *(undefined4 *)(*(int *)(iVar2 + 4) + 0x124) = 1;
  *(int *)(param_1 + 0x90) = iVar2;
  iVar1 = ALWidgetImp::Create(iVar1,_DAT_021d5154);
  (**(code **)(**(int **)(iVar1 + 4) + 0xd8))(*(int **)(iVar1 + 4),1);
  func_0x021b6214(*(undefined4 *)(iVar1 + 4),0);
  (**(code **)(**(int **)(iVar1 + 4) + 0x24))(*(int **)(iVar1 + 4),param_1);
  FUN_02028384(*(undefined4 *)(iVar1 + 4),FUN_0215872c);
  local_30 = 0x84000;
  FUN_02152730(iVar1,&local_30);
  iVar2 = 0;
  *(undefined4 *)(*(int *)(iVar1 + 4) + 0x124) = 0;
  *(int *)(param_1 + 0x8c) = iVar1;
  do {
    if (iVar2 == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = 4;
    }
    iVar4 = *(int *)(param_1 + iVar4 * 4 + 0x1c);
    if (iVar4 != 0) {
      (**(code **)(**(int **)(iVar4 + 4) + 0xd8))(*(int **)(iVar4 + 4),1);
      FUN_0214e908(iVar1,iVar4);
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 2);
  return;
}

