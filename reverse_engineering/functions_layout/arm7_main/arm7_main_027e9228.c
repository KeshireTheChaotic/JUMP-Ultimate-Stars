
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_027e9228(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 8);
  if ((*(short *)(iVar2 + -4) == -0x4948) && (*(short *)(iVar2 + -2) == 0x1d46)) {
    uVar1 = 0;
  }
  else {
    *(undefined2 *)(iVar2 + 10) = 1;
    *(undefined2 *)(iVar2 + -4) = 0xb6b8;
    *(undefined2 *)(iVar2 + -2) = 0x1d46;
    iVar2 = *(int *)(param_1 + 8);
    *(undefined2 *)(iVar2 + 0xc) = 0xb6b8;
    *(undefined2 *)(iVar2 + 0xe) = 0x1d46;
    *(short *)(_DAT_0380fff4 + 0x3fa) = *(short *)(_DAT_0380fff4 + 0x3fa) + 1;
    uVar1 = 1;
  }
  return uVar1;
}

