
void FUN_01ffd9f8(int *param_1)

{
  byte bVar1;
  byte bVar2;
  undefined1 *puVar3;
  int unaff_r6;
  int iVar4;
  
  puVar3 = (undefined1 *)(param_1[-2] + *param_1);
  bVar1 = puVar3[-0xff];
  bVar2 = puVar3[0xeff];
  FUN_01ff9450();
  iVar4 = ((uint)bVar1 + (uint)bVar2 + 1 >> 1) + unaff_r6 * 2;
  puVar3[0xf01] = (char)iVar4;
  puVar3[0xf00] = (char)((int)((uint)(byte)puVar3[0xeff] + iVar4) >> 1);
  iVar4 = (int)((uint)(byte)puVar3[-0xff] + iVar4) >> 1;
  puVar3[0x701] = (char)iVar4;
  puVar3[0x700] = (char)((int)(iVar4 + (uint)(byte)puVar3[0x6ff]) >> 1);
  puVar3[0x300] = (char)((int)((uint)(byte)puVar3[0x700] + (uint)(byte)puVar3[-0x100]) >> 1);
  puVar3[0x301] = (char)((int)((uint)(byte)puVar3[0x701] + (uint)(byte)puVar3[-0xff]) >> 1);
  puVar3[0x100] = (char)((int)((uint)(byte)puVar3[0x300] + (uint)(byte)puVar3[-0x100]) >> 1);
  puVar3[0x101] = (char)((int)((uint)(byte)puVar3[0x301] + (uint)(byte)puVar3[-0xff]) >> 1);
  *puVar3 = (char)((int)((uint)(byte)puVar3[0x100] + (uint)(byte)puVar3[-0x100]) >> 1);
  puVar3[1] = (char)((int)((uint)(byte)puVar3[0x101] + (uint)(byte)puVar3[-0xff]) >> 1);
  puVar3[0x200] = (char)((int)((uint)(byte)puVar3[0x300] + (uint)(byte)puVar3[0x100]) >> 1);
  puVar3[0x201] = (char)((int)((uint)(byte)puVar3[0x301] + (uint)(byte)puVar3[0x101]) >> 1);
  puVar3[0x500] = (char)((int)((uint)(byte)puVar3[0x700] + (uint)(byte)puVar3[0x300]) >> 1);
  puVar3[0x501] = (char)((int)((uint)(byte)puVar3[0x701] + (uint)(byte)puVar3[0x301]) >> 1);
  puVar3[0x400] = (char)((int)((uint)(byte)puVar3[0x500] + (uint)(byte)puVar3[0x300]) >> 1);
  puVar3[0x401] = (char)((int)((uint)(byte)puVar3[0x501] + (uint)(byte)puVar3[0x301]) >> 1);
  puVar3[0x600] = (char)((int)((uint)(byte)puVar3[0x700] + (uint)(byte)puVar3[0x500]) >> 1);
  puVar3[0x601] = (char)((int)((uint)(byte)puVar3[0x701] + (uint)(byte)puVar3[0x501]) >> 1);
  puVar3[0xb00] = (char)((int)((uint)(byte)puVar3[0xf00] + (uint)(byte)puVar3[0x700]) >> 1);
  puVar3[0xb01] = (char)((int)((uint)(byte)puVar3[0xf01] + (uint)(byte)puVar3[0x701]) >> 1);
  puVar3[0x900] = (char)((int)((uint)(byte)puVar3[0xb00] + (uint)(byte)puVar3[0x700]) >> 1);
  puVar3[0x901] = (char)((int)((uint)(byte)puVar3[0xb01] + (uint)(byte)puVar3[0x701]) >> 1);
  puVar3[0x800] = (char)((int)((uint)(byte)puVar3[0x900] + (uint)(byte)puVar3[0x700]) >> 1);
  puVar3[0x801] = (char)((int)((uint)(byte)puVar3[0x901] + (uint)(byte)puVar3[0x701]) >> 1);
  puVar3[0xa00] = (char)((int)((uint)(byte)puVar3[0xb00] + (uint)(byte)puVar3[0x900]) >> 1);
  puVar3[0xa01] = (char)((int)((uint)(byte)puVar3[0xb01] + (uint)(byte)puVar3[0x901]) >> 1);
  puVar3[0xd00] = (char)((int)((uint)(byte)puVar3[0xf00] + (uint)(byte)puVar3[0xb00]) >> 1);
  puVar3[0xd01] = (char)((int)((uint)(byte)puVar3[0xf01] + (uint)(byte)puVar3[0xb01]) >> 1);
  puVar3[0xc00] = (char)((int)((uint)(byte)puVar3[0xd00] + (uint)(byte)puVar3[0xb00]) >> 1);
  puVar3[0xc01] = (char)((int)((uint)(byte)puVar3[0xd01] + (uint)(byte)puVar3[0xb01]) >> 1);
  puVar3[0xe00] = (char)((int)((uint)(byte)puVar3[0xf00] + (uint)(byte)puVar3[0xd00]) >> 1);
  puVar3[0xe01] = (char)((int)((uint)(byte)puVar3[0xf01] + (uint)(byte)puVar3[0xd01]) >> 1);
  FUN_01ffd954();
  FUN_01ffd954();
  return;
}

