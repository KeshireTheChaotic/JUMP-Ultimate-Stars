
void FUN_0204754c(int param_1,int *param_2)

{
  int *piVar1;
  
  if (*(int **)(param_1 + 0x5c) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x5c) + 0xc))();
  }
  *(int **)(param_1 + 0x5c) = param_2;
  (**(code **)(*param_2 + 8))();
  piVar1 = (int *)(**(code **)(**(int **)(param_1 + 0x5c) + 0x2c))(*(int **)(param_1 + 0x5c),0);
  if ((*piVar1 == 0x4d544c41) && ((piVar1[1] & 0xffU) == 0)) {
    *(uint *)(param_1 + 0x6c) = (uint)*(ushort *)(piVar1 + 4);
    *(uint *)(param_1 + 0x70) = (uint)*(ushort *)((int)piVar1 + 0x12);
    *(int **)(param_1 + 0xac) = piVar1 + 6;
  }
  else {
    *(int *)(param_1 + 0x6c) = piVar1[6];
    *(int *)(param_1 + 0x70) = piVar1[7];
    *(int **)(param_1 + 0xac) = piVar1 + 10;
  }
  DC_FlushRange(*(undefined4 *)(param_1 + 0xac),
                *(int *)(param_1 + 0x78) * *(int *)(param_1 + 0x6c) * *(int *)(param_1 + 0x70));
  return;
}

