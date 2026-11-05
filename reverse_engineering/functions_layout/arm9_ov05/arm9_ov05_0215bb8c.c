
void FUN_0215bb8c(int param_1,int param_2,int param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  undefined4 local_20;
  int local_1c;
  int local_18;
  int iStack_14;
  
  iStack_14 = param_4;
  if (param_2 == 0) {
    local_20 = 0x140000;
    FUN_02150a10(*(undefined4 *)(param_1 + 0x15c),&local_20);
    func_0x021b65d8(*(undefined4 *)(*(int *)(param_1 + 0x15c) + 4));
    piVar1 = *(int **)(*(int *)(param_1 + 0x15c) + 4);
    (**(code **)(*piVar1 + 0xd8))(piVar1,0);
    iVar2 = 0;
    do {
      piVar1 = *(int **)(*(int *)(param_1 + iVar2 * 4 + 0x170) + 4);
      (**(code **)(*piVar1 + 0xd8))(piVar1,0);
      iVar2 = iVar2 + 1;
    } while (iVar2 < 4);
  }
  else {
    local_1c = param_4 << 0xc;
    local_18 = param_3 << 0xc;
    FUN_0214ce68(*(undefined4 *)(param_1 + 0x15c),&local_18,&local_1c);
    func_0x021b65e0(*(undefined4 *)(*(int *)(param_1 + 0x15c) + 4));
    func_0x021b6214(*(undefined4 *)(*(int *)(param_1 + 0x15c) + 4),1);
    piVar1 = *(int **)(*(int *)(param_1 + 0x15c) + 4);
    (**(code **)(*piVar1 + 0xd8))(piVar1,1);
    iVar2 = 0;
    do {
      if (*(char *)(param_1 + iVar2 + 0x4ea) != '\0') {
        piVar1 = *(int **)(*(int *)(param_1 + iVar2 * 4 + 0x170) + 4);
        (**(code **)(*piVar1 + 0xd8))(piVar1,1);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < 4);
  }
  return;
}

