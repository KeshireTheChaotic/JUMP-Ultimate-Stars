
void FUN_021554d0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  
  *(undefined4 *)(param_1 + 0x88) = param_2;
  if (*(code **)(param_1 + 0x70) != (code *)0x0) {
    (**(code **)(param_1 + 0x70))(param_1,*(undefined4 *)(param_1 + 0x74),3,0,0,0,0,0,0,param_4);
  }
  if ((*(int *)(param_1 + 0x88) != 0) && ((*(uint *)(param_1 + 0x90) & 0x100000) != 0)) {
    piVar1 = *(int **)(*(int *)(param_1 + 0x88) + 4);
    (**(code **)(*piVar1 + 0xd8))(piVar1,1);
  }
  if (*(int *)(param_1 + 0x7c) != 0) {
    if ((*(uint *)(param_1 + 0x90) & 0x200000) != 0) {
      iVar2 = *(int *)(*(int *)(*(int *)(param_1 + 0x7c) + 0x10) + 0x5c);
      *(uint *)(iVar2 + 0x34) = *(uint *)(iVar2 + 0x34) & 0xfffffffd;
    }
    if ((*(uint *)(param_1 + 0x90) & 0x400000) != 0) {
      FUN_0207cec8(*(undefined4 *)(*(int *)(param_1 + 0x7c) + 0x10),0x20000000);
    }
    if ((*(uint *)(param_1 + 0x90) & 0x1000000) != 0) {
      FUN_02155604(*(undefined4 *)(param_1 + 0x7c),0);
    }
    if ((*(uint *)(param_1 + 0x90) & 0x800000) != 0) {
      FUN_0207d11c(*(undefined4 *)(*(int *)(param_1 + 0x7c) + 0x10),0);
    }
  }
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined1 *)(param_1 + 0xa0) = 0;
  *(undefined2 *)(param_1 + 0x9e) = 0;
  *(undefined2 *)(param_1 + 0x9c) = 0;
  *(undefined1 *)(param_1 + 0xa2) = 0;
  *(undefined4 *)(param_1 + 0x98) = 0xffffffff;
  *(undefined1 *)(param_1 + 0xa1) = 0;
  iVar2 = 7;
  do {
    iVar2 = iVar2 + -1;
    *(undefined1 *)(param_1 + 1) = 0xff;
    param_1 = param_1 + 0x10;
  } while (0 < iVar2);
  return;
}

