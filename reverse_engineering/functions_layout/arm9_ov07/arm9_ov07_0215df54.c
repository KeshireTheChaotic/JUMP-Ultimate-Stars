
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0215df54(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 auStack_1c [8];
  
  piVar1 = *(int **)(param_1 + 0x50);
  if (param_2 == 0) {
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))();
      *(undefined4 *)(param_1 + 0x50) = 0;
    }
    if (*(int **)(param_1 + 0x54) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0x54) + 8))();
      *(undefined4 *)(param_1 + 0x54) = 0;
    }
    if (*(int **)(param_1 + 0x58) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0x58) + 8))();
      *(undefined4 *)(param_1 + 0x58) = 0;
    }
  }
  else {
    if (piVar1 == (int *)0x0) {
      iVar5 = 0;
      do {
        iVar2 = ALWidgetImp::Create(*(undefined4 *)(param_1 + 0x28),_DAT_021d5154);
        (**(code **)(**(int **)(iVar2 + 4) + 0x24))(*(int **)(iVar2 + 4),param_1);
        FUN_021502ec(auStack_1c,0,0,0x40,0x18);
        uVar3 = FUN_0214f3bc(0,auStack_1c,&DAT_02093c8c);
        FUN_02020e98(iVar2,uVar3);
        *(undefined1 *)(*(int *)(iVar2 + 4) + 0xaa) = 0;
        func_0x021b65e8(*(undefined4 *)(iVar2 + 4),4,0x215ded9);
        *(undefined4 *)(*(int *)(iVar2 + 4) + 0xdc) = 0x215def1;
        *(int *)(*(int *)(iVar2 + 4) + 0x124) = iVar5 + 9;
        (**(code **)(**(int **)(iVar2 + 4) + 0xd8))(*(int **)(iVar2 + 4),0);
        iVar4 = iVar5 * 4;
        iVar5 = iVar5 + 1;
        *(int *)(param_1 + iVar4 + 0x50) = iVar2;
      } while (iVar5 < 2);
      local_24 = 0x48000;
      local_20 = 0x3c000;
      FUN_0214f218(*(undefined4 *)(param_1 + 0x50),&local_20,&local_24);
      local_2c = 0x48000;
      local_28 = 0x84000;
      FUN_0214f218(*(undefined4 *)(param_1 + 0x54),&local_28,&local_2c);
      piVar1 = *(int **)(*(int *)(param_1 + 0x50) + 4);
      if (*(int *)(param_1 + 0x54) == 0) {
        (**(code **)(*piVar1 + 0x164))(piVar1,4);
      }
      else {
        (**(code **)(*piVar1 + 0x160))(piVar1,4,*(undefined4 *)(*(int *)(param_1 + 0x54) + 4));
      }
      piVar1 = *(int **)(*(int *)(param_1 + 0x54) + 4);
      if (*(int *)(param_1 + 0x50) == 0) {
        (**(code **)(*piVar1 + 0x164))(piVar1,8);
      }
      else {
        (**(code **)(*piVar1 + 0x160))(piVar1,8,*(undefined4 *)(*(int *)(param_1 + 0x50) + 4));
      }
      iVar5 = ALWidgetImp::Create(*(undefined4 *)(param_1 + 0x28),_DAT_021d5154);
      (**(code **)(**(int **)(iVar5 + 4) + 0x24))(*(int **)(iVar5 + 4),param_1);
      *(undefined1 *)(*(int *)(iVar5 + 4) + 0xaa) = 1;
      *(undefined1 *)(*(int *)(iVar5 + 4) + 0xab) = 0;
      *(undefined4 *)(*(int *)(iVar5 + 4) + 0x124) = 10;
      (**(code **)(**(int **)(iVar5 + 4) + 0xd8))();
      *(int *)(param_1 + 0x58) = iVar5;
    }
    piVar1 = *(int **)(*(int *)(param_1 + 0x50) + 4);
    (**(code **)(*piVar1 + 0xd8))(piVar1,1);
    piVar1 = *(int **)(*(int *)(param_1 + 0x54) + 4);
    (**(code **)(*piVar1 + 0xd8))(piVar1,1);
    func_0x021b6214(*(undefined4 *)(*(int *)(param_1 + 0x50) + 4),1);
  }
  return;
}

