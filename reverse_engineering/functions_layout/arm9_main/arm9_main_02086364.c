
void FUN_02086364(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = *(int **)(param_1 + 0x30);
  iVar1 = FUN_020862e8();
  if (iVar1 != 0) {
    iVar1 = piVar3[5];
    *(short *)(piVar3 + 5) = (short)iVar1 + -1;
    if ((short)iVar1 == 0) {
      if (*(char *)((int)piVar3 + 0x35) == '\x02') {
        *(undefined1 *)((int)piVar3 + 0x35) = 3;
        *(undefined2 *)(piVar3 + 5) = 0x168;
        if (*piVar3 != 0) {
          *(undefined1 *)(*(short *)((int)piVar3 + 0x1a) * 0x18 + *(int *)(*piVar3 + 0x18) + 0x15) =
               0;
        }
        *(ushort *)((int)piVar3 + 0x36) = *(ushort *)((int)piVar3 + 0x36) | 1;
        if (param_1 != 0) {
          FUN_0207a878(*(undefined4 *)(param_1 + 0x14));
        }
        FUN_02023894(*(undefined4 *)(*(int *)(param_1 + 8) + 4),piVar3[0xc] + 6,0);
        (**(code **)(**(int **)(*(int *)(*(int *)(param_1 + 8) + 4) + 0x68) + 0x6c))();
      }
      else {
        *(char *)((int)piVar3 + 0x35) = *(char *)((int)piVar3 + 0x35) + '\x01';
        *(undefined2 *)(piVar3 + 5) = 0x78;
        FUN_02023894(*(undefined4 *)(*(int *)(param_1 + 8) + 4),
                     piVar3[0xc] + 3 + (uint)*(byte *)((int)piVar3 + 0x35),0,*(int *)(param_1 + 8),
                     param_4);
        (**(code **)(**(int **)(*(int *)(*(int *)(param_1 + 8) + 4) + 0x68) + 0x6c))();
      }
    }
    if ((*(ushort *)((int)piVar3 + 0x36) & 1) == 0) {
      FUN_02023894(*(undefined4 *)(*(int *)(param_1 + 8) + 4),
                   piVar3[0xc] + 3 + (uint)*(byte *)((int)piVar3 + 0x35),0,*(int *)(param_1 + 8),
                   param_4);
      (**(code **)(**(int **)(*(int *)(*(int *)(param_1 + 8) + 4) + 0x68) + 0x6c))();
    }
    *(ushort *)((int)piVar3 + 0x36) = *(ushort *)((int)piVar3 + 0x36) | 1;
    return;
  }
  if (*(byte *)((int)piVar3 + 0x35) != 3) {
    if ((*(ushort *)((int)piVar3 + 0x36) & 1) != 0) {
      FUN_02023894(*(undefined4 *)(*(int *)(param_1 + 8) + 4),
                   piVar3[0xc] + (uint)*(byte *)((int)piVar3 + 0x35),0);
      (**(code **)(**(int **)(*(int *)(*(int *)(param_1 + 8) + 4) + 0x68) + 0x6c))();
    }
    *(ushort *)((int)piVar3 + 0x36) = *(ushort *)((int)piVar3 + 0x36) & 0xfffe;
    return;
  }
  iVar1 = piVar3[5];
  *(short *)(piVar3 + 5) = (short)iVar1 + -1;
  if ((short)iVar1 == 0) {
    *(undefined1 *)((int)piVar3 + 0x35) = 0;
    *(undefined2 *)(piVar3 + 5) = 0x78;
    if (*piVar3 != 0) {
      iVar1 = *(short *)((int)piVar3 + 0x1a) * 0x18;
      iVar2 = *(int *)(*piVar3 + 0x18) + 0x15;
      *(byte *)(iVar2 + iVar1) = *(byte *)(iVar2 + iVar1) | 4;
    }
    if (param_1 != 0) {
      FUN_0207a878(*(undefined4 *)(param_1 + 0x14));
    }
    FUN_02023894(*(undefined4 *)(*(int *)(param_1 + 8) + 4),
                 piVar3[0xc] + (uint)*(byte *)((int)piVar3 + 0x35),0);
    (**(code **)(**(int **)(*(int *)(*(int *)(param_1 + 8) + 4) + 0x68) + 0x6c))();
  }
  *(ushort *)((int)piVar3 + 0x36) = *(ushort *)((int)piVar3 + 0x36) & 0xfffe;
  return;
}

