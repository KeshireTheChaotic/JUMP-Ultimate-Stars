
void FUN_0214d3d4(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  FUN_0207538c(*(undefined4 *)(iVar2 + 0x18),*(undefined1 *)(*(int *)(iVar2 + 0x14) + 8));
  cVar1 = *(char *)(*(int *)(iVar2 + 0x14) + 7);
  if ((cVar1 != -1) && ((DAT_020b0b90 & 0x20) == 0)) {
    DAT_020afee1 = cVar1;
  }
  iVar3 = 0;
  if ((*(byte *)(*(int *)(iVar2 + 0x14) + 0xc) & 1) != 0) {
    DAT_020afee2 = 1;
  }
  DAT_020aff27 = *(undefined1 *)(*(int *)(iVar2 + 0x14) + 0xb);
  for (; iVar3 < (int)(uint)*(byte *)(*(int *)(iVar2 + 0x14) + 0xb); iVar3 = iVar3 + 1) {
    (&DAT_020aff29)[iVar3] = (char)*(undefined2 *)(iVar3 * 0x14 + *(int *)(iVar2 + 0x14) + 0x10);
  }
  if (((&DAT_020b4084)[*(int *)(iVar2 + 0x34)] & 1) == 0) {
    cVar1 = *(char *)(*(int *)(iVar2 + 0x14) + 5);
    if (cVar1 != -1) {
      DAT_020afedf = cVar1;
    }
    cVar1 = *(char *)(*(int *)(iVar2 + 0x14) + 6);
    if (cVar1 != -1) {
      DAT_020afee0 = cVar1;
    }
  }
  *(uint *)(iVar2 + 0x3c) = (uint)((*(byte *)(*(int *)(iVar2 + 0x14) + 0xc) & 8) != 0);
  FUN_0207342c(0x78,0);
  func_0x021b65cc();
  FUN_0214d318(iVar2);
  return;
}

