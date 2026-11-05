
void FUN_02079f08(int param_1,int param_2,undefined4 param_3)

{
  ushort uVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  
  iVar2 = (((int)*(char *)(param_2 + 0xe) << 0x1a) >> 0x1a) * 0xc;
  puVar3 = (undefined4 *)(param_1 + 0x70 + iVar2);
  *(ushort *)((int)puVar3 + 6) =
       *(ushort *)((int)puVar3 + 6) & 0x8000 | (*(ushort *)((int)puVar3 + 6) & 0x7fff) - 1 & 0x7fff;
  FUN_0207b25c(*(undefined4 *)(param_1 + 0x70 + iVar2),*(ushort *)((int)puVar3 + 6) & 0x7fff);
  if ((*(ushort *)((int)puVar3 + 6) & 0x7fff) != ((int)*(char *)(param_2 + 0xf) << 0x1a) >> 0x1a) {
    *(ushort *)((int)puVar3 + 6) = *(ushort *)((int)puVar3 + 6) & 0x8000;
    iVar4 = 7;
    iVar2 = param_1;
    do {
      if ((*(short *)(iVar2 + 0xc) == *(short *)(param_2 + 0xc)) && (*(char *)(iVar2 + 0xe) < '\0'))
      {
        uVar1 = *(ushort *)((int)puVar3 + 6);
        *(ushort *)((int)puVar3 + 6) = uVar1 & 0x8000 | (uVar1 & 0x7fff) + 1 & 0x7fff;
        *(byte *)(iVar2 + 0xf) = *(byte *)(iVar2 + 0xf) & 0xc0 | (byte)uVar1 & 0x3f;
        FUN_02079e40(param_1,iVar2,param_3);
      }
      iVar4 = iVar4 + -1;
      iVar2 = iVar2 + 0x10;
    } while (0 < iVar4);
  }
  *(byte *)(param_2 + 0xf) = *(byte *)(param_2 + 0xf) & 0xc0 | 0x3f;
  if ((*(ushort *)((int)puVar3 + 6) & 0x7fff) == 0) {
    FUN_0207b2d0(*puVar3,0);
    return;
  }
  return;
}

