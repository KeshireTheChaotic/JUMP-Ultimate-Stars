
void FUN_02156860(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  code *pcVar2;
  
  if (*(int *)(param_1 + 0x88) == 0) {
    return;
  }
  if (*(short *)(param_2 + 2) == 0) {
    *(uint *)(param_1 + 0x90) = *(uint *)(param_1 + 0x90) | 0x100000;
    piVar1 = *(int **)(*(int *)(param_1 + 0x88) + 4);
    pcVar2 = *(code **)(*piVar1 + 0xd8);
    (*pcVar2)(piVar1,0,pcVar2,param_4,param_4);
    return;
  }
  *(uint *)(param_1 + 0x90) = *(uint *)(param_1 + 0x90) & 0xffefffff;
  piVar1 = *(int **)(*(int *)(param_1 + 0x88) + 4);
  (**(code **)(*piVar1 + 0xd8))(piVar1,1);
  return;
}

