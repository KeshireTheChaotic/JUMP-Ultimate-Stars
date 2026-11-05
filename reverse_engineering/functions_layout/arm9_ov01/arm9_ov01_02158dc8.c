
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_02158dc8(undefined4 param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int local_20;
  int local_1c [2];
  
                    /* JUS-TAG source_file_inferred="DeckSelect.cpp" */
  iVar1 = FUN_0203b3f4();
  iVar1 = FUN_02158ca4(0,param_2[3],*(undefined4 *)(iVar1 + 0x88),0x66);
  iVar2 = ALWidgetImp::Create(param_3,_DAT_021d5154);
  FUN_0214e688(iVar2,iVar1);
  (**(code **)(**(int **)(iVar2 + 4) + 0x24))(*(int **)(iVar2 + 4),param_1);
  *(undefined1 *)(*(int *)(iVar2 + 4) + 0xaa) = 1;
  if (param_2[7] != 0) {
    func_0x021b77a8(*(undefined4 *)(iVar2 + 4));
    *(undefined1 *)(*(int *)(iVar2 + 4) + 0xb1) = 1;
  }
  local_1c[1] = 0x66000;
  FUN_0214e6c0(iVar2,local_1c + 1);
  if (param_2[2] == 0) {
    (**(code **)(**(int **)(iVar1 + 4) + 0xd8))(*(int **)(iVar1 + 4),0);
  }
  else {
    FUN_02023894(*(undefined4 *)(iVar2 + 4),param_2[2],0);
    (**(code **)(**(int **)(*(int *)(iVar2 + 4) + 0x68) + 0x6c))();
    func_0x021b3f78(*(undefined4 *)(iVar2 + 4),param_2[2]);
    func_0x021b3fb0(*(undefined4 *)(iVar2 + 4),param_2[2]);
    func_0x021b3fc4(*(undefined4 *)(iVar2 + 4),param_2[4]);
    func_0x021b400c(*(undefined4 *)(iVar2 + 4),param_2[5]);
  }
  local_20 = param_2[1] << 0xc;
  local_1c[0] = *param_2 << 0xc;
  FUN_021511c8(iVar2,local_1c,&local_20);
  uVar3 = FUN_02150a40(0,param_2 + 8,&DAT_02093c8c);
  FUN_02020e98(iVar2,uVar3);
  (**(code **)(**(int **)(iVar2 + 4) + 0xd8))(*(int **)(iVar2 + 4),1);
  return iVar2;
}

