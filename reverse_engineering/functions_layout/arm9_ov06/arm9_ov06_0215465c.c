
void FUN_0215465c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  undefined2 uVar2;
  int iVar3;
  uint uVar4;
  ushort uVar5;
  int iVar6;
  uint uVar7;
  undefined1 uVar8;
  
  iVar6 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  iVar3 = *(int *)(iVar6 + 4);
  if (iVar3 == 0) {
    uVar4 = 0;
    uVar5 = 0;
    uVar7 = 0;
    uVar8 = 0;
  }
  else {
    uVar8 = *(undefined1 *)(iVar3 + 0xc5);
    uVar7 = *(uint *)(iVar3 + 0xbc) >> 6;
    uVar5 = (ushort)*(byte *)(iVar3 + 0xc4);
    uVar4 = *(uint *)(iVar3 + 0xb8) >> 6;
  }
  if ((uVar5 != 0) && (*(ushort *)(iVar6 + 0xcc) != uVar5)) {
    *(ushort *)(iVar6 + 0xcc) = uVar5;
    *(undefined1 *)(iVar6 + 0xca) = 0;
  }
  if ((uVar4 != 0) && (*(ushort *)(iVar6 + 0xce) != uVar4)) {
    *(short *)(iVar6 + 0xce) = (short)uVar4;
    *(undefined1 *)(iVar6 + 0xca) = 0;
  }
  bVar1 = *(byte *)(iVar6 + 0xca);
  *(char *)(iVar6 + 0xca) = *(char *)(iVar6 + 0xca) + '\x01';
  if (0x78 < bVar1) {
    *(undefined1 *)(iVar6 + 0xca) = 0;
    *(undefined2 *)(iVar6 + 0xcc) = 0;
    *(undefined2 *)(iVar6 + 0xce) = 0;
  }
  uVar2 = *(undefined2 *)(iVar6 + 0xce);
  FUN_021551d0(iVar6,iVar6 + 0x3c,0x5f002c,0,0xffffffca,0xffffffef,3,*(undefined2 *)(iVar6 + 0xcc),
               param_4);
  FUN_021551d0(iVar6,iVar6 + 0x48,0x5f002c,1,0xffffffe7,0xfffffff3,3,uVar8);
  FUN_021551d0(iVar6,iVar6 + 0x54,0x5f002c,2,0xe,0xffffffef,4,uVar2);
  FUN_021551d0(iVar6,iVar6 + 100,0x5f002c,3,0x2e,0xfffffff3,4,uVar7);
  FUN_021550c8(iVar6);
  FUN_021548bc(iVar6);
  return;
}

