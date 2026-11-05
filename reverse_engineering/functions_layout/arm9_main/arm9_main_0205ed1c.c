
int * FUN_0205ed1c(int param_1,int param_2)

{
  int *piVar1;
  ushort uVar2;
  
  uVar2 = 0;
  piVar1 = (int *)(param_1 + (uint)*(ushort *)(param_1 + 0xc));
  if (*(ushort *)(param_1 + 0xe) != 0) {
    do {
      if (*piVar1 == param_2) {
        return piVar1;
      }
      uVar2 = uVar2 + 1;
      piVar1 = (int *)((int)piVar1 + piVar1[1]);
    } while (uVar2 < *(ushort *)(param_1 + 0xe));
  }
  return (int *)0x0;
}

