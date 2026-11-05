
void FUN_01ffb270(int *param_1)

{
  byte bVar1;
  byte bVar2;
  undefined1 *puVar3;
  int unaff_r6;
  int iVar4;
  
  puVar3 = (undefined1 *)(param_1[-2] + *param_1);
  bVar1 = puVar3[-0xf1];
  bVar2 = puVar3[0xff];
  FUN_01ff9450();
  iVar4 = ((uint)bVar1 + (uint)bVar2 + 1 >> 1) + unaff_r6 * 2;
  puVar3[0x10f] = (char)iVar4;
  puVar3[0x107] = (char)((int)((uint)(byte)puVar3[0xff] + iVar4) >> 1);
  iVar4 = (int)((uint)(byte)puVar3[-0xf1] + iVar4) >> 1;
  puVar3[0xf] = (char)iVar4;
  puVar3[7] = (char)((int)(iVar4 + (uint)(byte)puVar3[-1]) >> 1);
  puVar3[3] = (char)((int)((uint)(byte)puVar3[7] + (uint)(byte)puVar3[-1]) >> 1);
  puVar3[0x103] = (char)((int)((uint)(byte)puVar3[0x107] + (uint)(byte)puVar3[0xff]) >> 1);
  puVar3[1] = (char)((int)((uint)(byte)puVar3[3] + (uint)(byte)puVar3[-1]) >> 1);
  puVar3[0x101] = (char)((int)((uint)(byte)puVar3[0x103] + (uint)(byte)puVar3[0xff]) >> 1);
  *puVar3 = (char)((int)((uint)(byte)puVar3[1] + (uint)(byte)puVar3[-1]) >> 1);
  puVar3[0x100] = (char)((int)((uint)(byte)puVar3[0x101] + (uint)(byte)puVar3[0xff]) >> 1);
  puVar3[2] = (char)((int)((uint)(byte)puVar3[3] + (uint)(byte)puVar3[1]) >> 1);
  puVar3[0x102] = (char)((int)((uint)(byte)puVar3[0x103] + (uint)(byte)puVar3[0x101]) >> 1);
  puVar3[5] = (char)((int)((uint)(byte)puVar3[7] + (uint)(byte)puVar3[3]) >> 1);
  puVar3[0x105] = (char)((int)((uint)(byte)puVar3[0x107] + (uint)(byte)puVar3[0x103]) >> 1);
  puVar3[4] = (char)((int)((uint)(byte)puVar3[5] + (uint)(byte)puVar3[3]) >> 1);
  puVar3[0x104] = (char)((int)((uint)(byte)puVar3[0x105] + (uint)(byte)puVar3[0x103]) >> 1);
  puVar3[6] = (char)((int)((uint)(byte)puVar3[7] + (uint)(byte)puVar3[5]) >> 1);
  puVar3[0x106] = (char)((int)((uint)(byte)puVar3[0x107] + (uint)(byte)puVar3[0x105]) >> 1);
  puVar3[0xb] = (char)((int)((uint)(byte)puVar3[0xf] + (uint)(byte)puVar3[7]) >> 1);
  puVar3[0x10b] = (char)((int)((uint)(byte)puVar3[0x10f] + (uint)(byte)puVar3[0x107]) >> 1);
  puVar3[9] = (char)((int)((uint)(byte)puVar3[0xb] + (uint)(byte)puVar3[7]) >> 1);
  puVar3[0x109] = (char)((int)((uint)(byte)puVar3[0x10b] + (uint)(byte)puVar3[0x107]) >> 1);
  puVar3[8] = (char)((int)((uint)(byte)puVar3[9] + (uint)(byte)puVar3[7]) >> 1);
  puVar3[0x108] = (char)((int)((uint)(byte)puVar3[0x109] + (uint)(byte)puVar3[0x107]) >> 1);
  puVar3[10] = (char)((int)((uint)(byte)puVar3[0xb] + (uint)(byte)puVar3[9]) >> 1);
  puVar3[0x10a] = (char)((int)((uint)(byte)puVar3[0x10b] + (uint)(byte)puVar3[0x109]) >> 1);
  puVar3[0xd] = (char)((int)((uint)(byte)puVar3[0xf] + (uint)(byte)puVar3[0xb]) >> 1);
  puVar3[0x10d] = (char)((int)((uint)(byte)puVar3[0x10f] + (uint)(byte)puVar3[0x10b]) >> 1);
  puVar3[0xc] = (char)((int)((uint)(byte)puVar3[0xd] + (uint)(byte)puVar3[0xb]) >> 1);
  puVar3[0x10c] = (char)((int)((uint)(byte)puVar3[0x10d] + (uint)(byte)puVar3[0x10b]) >> 1);
  puVar3[0xe] = (char)((int)((uint)(byte)puVar3[0xf] + (uint)(byte)puVar3[0xd]) >> 1);
  puVar3[0x10e] = (char)((int)((uint)(byte)puVar3[0x10f] + (uint)(byte)puVar3[0x10d]) >> 1);
  FUN_01ffb1cc();
  FUN_01ffb1cc();
  return;
}

