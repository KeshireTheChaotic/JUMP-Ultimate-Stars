
void FUN_021532c4(int param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_20;
  int local_1c;
  
  iVar4 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  if ((*(uint *)(*(int *)(param_1 + 4) + 0x90) & 1) == 1) {
    iVar2 = *(char *)(iVar4 + 0x439) * 0x14;
    iVar3 = *(char *)(iVar4 + 0x439) * 0x24;
    bVar1 = (&DAT_0216d566)[iVar2];
    FUN_02152964(&local_20,param_1);
    iVar5 = local_20 + (uint)bVar1 * 0x1000;
    FUN_02152950(&local_1c,param_1);
    FUN_0215ee88(iVar4 + 0x3dc,0,
                 (int)(local_1c + 0x2000 + ((uint)(local_1c + 0x2000 >> 0xb) >> 0x14)) >> 0xc,
                 (int)(iVar5 + ((uint)(iVar5 >> 0xb) >> 0x14)) >> 0xc,
                 (byte)(&DAT_0216d563)[iVar2] - 0x14,*(byte *)(iVar4 + 0x46d) + 4);
    FUN_0215ee88(iVar4 + 0x3dc,1,(int)*(short *)(&DAT_0216f6cc + iVar3),
                 (int)*(short *)(&DAT_0216f6ce + iVar3),(int)*(short *)(&DAT_0216f6d4 + iVar3),
                 (int)*(short *)(&DAT_0216f6d6 + iVar3));
  }
  return;
}

