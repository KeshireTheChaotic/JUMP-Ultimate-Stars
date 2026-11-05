
void FUN_0215b348(int param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  
  uVar5 = (uint)(byte)(&DAT_02171468)[*(ushort *)(param_1 + 0x100)];
  iVar4 = *(int *)(*(int *)(*(int *)(param_1 + 0x1a8) + 0x10) + 0x5c);
  iVar2 = FUN_0215b3e0((int)(char)(&DAT_021713dd)[uVar5 * 4]);
  cVar1 = (&DAT_021713dc)[uVar5 * 4];
  iVar6 = *(int *)(iVar4 + 0xc);
  iVar3 = FUN_0215b3e0((int)(char)(&DAT_021713df)[uVar5 * 4]);
  FUN_0206c7fc(param_2,(int)cVar1 + (iVar6 >> 8) + iVar2,
               ((int)(char)(&DAT_021713de)[uVar5 * 4] + (*(int *)(iVar4 + 0x10) >> 8)) - iVar3,0);
  return;
}

