
byte FUN_0217ef34(int param_1,byte param_2)

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  
  pbVar2 = (byte *)(param_1 + 0x100);
  bVar1 = *pbVar2;
  *pbVar2 = bVar1 + 1;
  pbVar3 = (byte *)(param_1 + 0x101);
  *pbVar3 = *pbVar3 + *(char *)(param_1 + (uint)bVar1);
  pbVar6 = (byte *)(param_1 + 0x104);
  bVar1 = *(byte *)(param_1 + (uint)*pbVar6);
  *(undefined1 *)(param_1 + (uint)*pbVar6) = *(undefined1 *)(param_1 + (uint)*pbVar3);
  pbVar4 = (byte *)(param_1 + 0x103);
  *(undefined1 *)(param_1 + (uint)*pbVar3) = *(undefined1 *)(param_1 + (uint)*pbVar4);
  *(undefined1 *)(param_1 + (uint)*pbVar4) = *(undefined1 *)(param_1 + (uint)*pbVar2);
  *(byte *)(param_1 + (uint)*pbVar2) = bVar1;
  pbVar5 = (byte *)(param_1 + 0x102);
  *pbVar5 = *pbVar5 + *(char *)(param_1 + (uint)bVar1);
  *pbVar4 = param_2 ^ *(byte *)(param_1 +
                               ((uint)*(byte *)(param_1 + (uint)*pbVar5) +
                                (uint)*(byte *)(param_1 + (uint)*pbVar2) & 0xff)) ^
            *(byte *)(param_1 +
                     (uint)*(byte *)(param_1 +
                                    ((uint)*(byte *)(param_1 + (uint)*pbVar3) +
                                     (uint)*(byte *)(param_1 + (uint)*pbVar4) +
                                     (uint)*(byte *)(param_1 + (uint)*pbVar6) & 0xff)));
  *pbVar6 = param_2;
  return *pbVar4;
}

