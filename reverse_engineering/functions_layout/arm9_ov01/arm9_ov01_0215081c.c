
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0215081c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  uStack_18 = param_4;
                    /* JUS-TAG source_file_inferred="JArenaMissionTry.cpp" */
  iVar1 = ALWidgetBaseImp::Create();
  (**(code **)(**(int **)(iVar1 + 4) + 0xd8))(*(int **)(iVar1 + 4),1);
  *(undefined4 *)(*(int *)(iVar1 + 4) + 0x124) = 0x100;
  *(int *)(param_1 + 0x48) = iVar1;
  iVar6 = 0;
  do {
    if (iVar6 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = 3;
    }
    piVar3 = *(int **)(*(int *)(param_1 + iVar2 * 4 + 0x30) + 4);
    (**(code **)(*piVar3 + 0xd8))(piVar3,1);
    iVar2 = ALWidgetImp::Create(iVar1,_DAT_021d5154);
    if (iVar6 == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = 3;
    }
    FUN_0214e688(iVar2,*(undefined4 *)(param_1 + iVar5 * 4 + 0x30));
    (**(code **)(**(int **)(iVar2 + 4) + 0xd8))(*(int **)(iVar2 + 4),1);
    func_0x021b6214(*(undefined4 *)(iVar2 + 4),0);
    FUN_02028384(*(undefined4 *)(iVar2 + 4),0x21517f9);
    (**(code **)(**(int **)(iVar2 + 4) + 0x24))(*(int **)(iVar2 + 4),param_1);
    *(int *)(*(int *)(iVar2 + 4) + 0x124) = iVar6;
    iVar5 = iVar6 * 4;
    iVar6 = iVar6 + 1;
    *(int *)(param_1 + iVar5 + 0x68) = iVar2;
  } while (iVar6 < 2);
  uStack_20 = 0x80;
  uStack_1c = 0;
  iVar6 = FUN_0203b3e4();
  iVar6 = ALWidgetImp::Create(iVar1,*(undefined4 *)(iVar6 + 0x88),0x871000,0,0x20,&uStack_20);
  (**(code **)(**(int **)(iVar6 + 4) + 0xd8))(*(int **)(iVar6 + 4),1);
  func_0x021b6214(*(undefined4 *)(iVar6 + 4),0);
  *(undefined4 *)(*(int *)(iVar6 + 4) + 0x124) = 2;
  *(int *)(param_1 + 0x70) = iVar6;
  uStack_20 = 0x100;
  uStack_1c = 0xc0;
  iVar6 = FUN_0203b3e4();
  iVar1 = ALWidgetImp::Create(iVar1,*(undefined4 *)(iVar6 + 0x88),0x510000,0,0x20,&uStack_20);
  (**(code **)(**(int **)(iVar1 + 4) + 0xd8))(*(int **)(iVar1 + 4),1);
  *(undefined1 *)(*(int *)(iVar1 + 4) + 0xaa) = 1;
  *(undefined1 *)(*(int *)(iVar1 + 4) + 0xab) = 0;
  func_0x021b77a8(*(undefined4 *)(iVar1 + 4),0x20);
  (**(code **)(**(int **)(iVar1 + 4) + 0x24))(*(int **)(iVar1 + 4),param_1);
  uVar4 = FUN_02150a40(0,&DAT_0216bdbc,&DAT_02093c8c);
  FUN_02020e98(iVar1,uVar4);
  func_0x021b65e8(*(undefined4 *)(iVar1 + 4),4,FUN_021518c8 + 1);
  func_0x021b6760(*(undefined4 *)(iVar1 + 4),4,FUN_021518d8);
  FUN_02023894(*(undefined4 *)(iVar1 + 4),0x510000,0);
  func_0x021b3f78(*(undefined4 *)(iVar1 + 4),0x510000);
  func_0x021b3fc4(*(undefined4 *)(iVar1 + 4),0x510001);
  *(undefined4 *)(*(int *)(iVar1 + 4) + 0x124) = 6;
  *(int *)(param_1 + 0x80) = iVar1;
  return;
}

