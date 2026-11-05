
void FUN_01ffe2b0(int *param_1)

{
  int iVar1;
  byte bVar2;
  byte bVar3;
  undefined1 *puVar4;
  int unaff_r6;
  int iVar5;
  
  puVar4 = (undefined1 *)(param_1[-2] + *param_1);
  bVar2 = puVar4[-0xff];
  bVar3 = puVar4[0xff];
  FUN_01ff9450();
  iVar5 = ((uint)bVar2 + (uint)bVar3 + 1 >> 1) + unaff_r6 * 2;
  puVar4[0x101] = (char)iVar5;
  iVar1 = (int)((uint)(byte)puVar4[0xff] + iVar5) >> 1;
  puVar4[0x100] = (char)iVar1;
  puVar4[1] = (char)((int)((uint)(byte)puVar4[-0xff] + iVar5) >> 1);
  *puVar4 = (char)((int)(iVar1 + (uint)(byte)puVar4[-0x100]) >> 1);
  FUN_01ffe288();
  FUN_01ffe288();
  return;
}

