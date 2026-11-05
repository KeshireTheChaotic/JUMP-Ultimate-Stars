
int FUN_020681d8(int param_1)

{
  int iVar1;
  
  if (*(byte *)(param_1 + 0x16) < 10) {
    if (*(char *)(param_1 + 0x14) == '\x03') {
      iVar1 = -(uint)*(byte *)(param_1 + 0x15) - 0xc79c;
    }
    else if (*(char *)(param_1 + 0x14) == '\x04') {
      iVar1 = -(uint)*(byte *)(param_1 + 0x15) - 0xc800;
    }
    else {
      iVar1 = -(uint)*(byte *)(param_1 + 0x15) - 0xc864;
    }
  }
  else if (*(byte *)(param_1 + 0x16) < 0xd) {
    iVar1 = -(uint)*(byte *)(param_1 + 0x15) - 52000;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x10);
    if (iVar1 == 0) {
      iVar1 = -(uint)*(byte *)(param_1 + 0x15) - 50000;
    }
    else if (iVar1 == -1) {
      iVar1 = -(uint)*(byte *)(param_1 + 0x15) - 0xcb84;
    }
    else if (iVar1 == -2) {
      iVar1 = -(uint)*(byte *)(param_1 + 0x15) - 0xcbe8;
    }
    else if (iVar1 == -3) {
      iVar1 = -(uint)*(byte *)(param_1 + 0x15) - 0xcc4c;
    }
    else if (iVar1 == -4) {
      iVar1 = -(uint)*(byte *)(param_1 + 0x15) - 53000;
    }
    else if (iVar1 == -5) {
      iVar1 = -(uint)*(byte *)(param_1 + 0x15) - 0xcf6c;
    }
    else if (iVar1 == -6) {
      iVar1 = -(uint)*(byte *)(param_1 + 0x15) - 0xcfd0;
    }
  }
  return iVar1;
}

