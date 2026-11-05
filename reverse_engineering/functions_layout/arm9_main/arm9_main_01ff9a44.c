
void FUN_01ff9a44(int param_1)

{
  byte bVar1;
  byte bVar2;
  uint unaff_r4;
  uint unaff_r5;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar4 = *(int *)(param_1 + -4) + *(int *)(param_1 + 4);
  bVar1 = *(byte *)(iVar4 + unaff_r4 + -0x101);
  iVar5 = iVar4 + unaff_r5 * 0x80;
  bVar2 = *(byte *)(iVar5 + -0x101);
  iVar6 = iVar4 + unaff_r4 + unaff_r5 * 0x80;
  *(char *)(iVar6 + -0x102) =
       (char)((uint)*(byte *)(iVar4 + unaff_r4 + -0x102) + (uint)*(byte *)(iVar5 + -0x102) + 1 >> 1)
  ;
  *(char *)(iVar6 + -0x101) = (char)((uint)bVar1 + (uint)bVar2 + 1 >> 1);
  puVar3 = (&PTR_FUN_01ff9a18)[(unaff_r4 >> 3) + (unaff_r5 >> 3) * 4];
  (*(code *)((uint)puVar3 & 0xfffffffc))();
  (*(code *)((uint)puVar3 & 0xfffffffc))();
  return;
}

