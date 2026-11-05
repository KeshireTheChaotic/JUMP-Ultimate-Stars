
void FUN_0216417c(int param_1)

{
  short sVar1;
  int iVar2;
  
  sVar1 = *(short *)(param_1 + 0x10);
  if (*(char *)(param_1 + 0x12) == '\0') {
    if (sVar1 == 0x3c || sVar1 == 0x1e) {
      FUN_021520dc(8,8,8);
      FUN_0207342c(0x7a,0x4a);
    }
    else if (sVar1 == 0) {
      FUN_021520dc((int)*(short *)(*(int *)(param_1 + 0xc) + 2),8,8);
      iVar2 = *(int *)(*(int *)(param_1 + 8) + 0x10);
      *(uint *)(iVar2 + 0x3c) = *(uint *)(iVar2 + 0x3c) | 4;
      *(undefined2 *)(param_1 + 0x10) = *(undefined2 *)(*(int *)(param_1 + 0xc) + 2);
      *(undefined1 *)(param_1 + 0x12) = 1;
      FUN_0207342c(0x7a,0x4b);
    }
  }
  else if (sVar1 == 0) {
    iVar2 = *(int *)(*(int *)(param_1 + 8) + 0x10);
    *(uint *)(iVar2 + 0x3c) = *(uint *)(iVar2 + 0x3c) & 0xfffffffb;
    *(undefined2 *)(param_1 + 0x10) = **(undefined2 **)(param_1 + 0xc);
    *(undefined1 *)(param_1 + 0x12) = 0;
  }
  *(short *)(param_1 + 0x10) = *(short *)(param_1 + 0x10) + -1;
  return;
}

