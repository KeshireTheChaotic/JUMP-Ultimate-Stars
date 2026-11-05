
void FUN_020692c0(int param_1,int param_2)

{
  int iVar1;
  int extraout_r1;
  int iVar2;
  byte *pbVar3;
  int iVar4;
  undefined1 *puVar5;
  int iVar6;
  undefined1 local_28 [20];
  
  puVar5 = local_28;
  iVar4 = 0;
  do {
    FUN_0200d12c(iVar4,7);
    *(byte *)(param_2 + iVar4) = *(byte *)(param_1 + iVar4) ^ *(byte *)(param_1 + extraout_r1 + 0xd)
    ;
    iVar4 = iVar4 + 1;
  } while (iVar4 < 0xd);
  iVar4 = 0;
  do {
    *(byte *)(param_2 + iVar4 + 3) =
         *(byte *)(param_2 + iVar4 + 3) ^ *(byte *)(param_1 + iVar4 + 0xd);
    iVar4 = iVar4 + 1;
  } while (iVar4 < 7);
  iVar4 = 0;
  do {
    *(byte *)(param_2 + iVar4) = *(byte *)(param_2 + iVar4) ^ *(byte *)(DAT_0209dd60 + iVar4);
    iVar4 = iVar4 + 1;
  } while (iVar4 < 0xd);
  FUN_02051890(param_2,local_28,0xd);
  iVar4 = 0;
  pbVar3 = &DAT_02092360;
  do {
    *(undefined1 *)(param_2 + (uint)*pbVar3) = *puVar5;
    puVar5 = puVar5 + 1;
    pbVar3 = pbVar3 + 1;
    iVar4 = iVar4 + 1;
  } while (iVar4 < 0xd);
  iVar4 = 0;
  do {
    *(byte *)(param_2 + iVar4) = *(byte *)(param_2 + iVar4) ^ *(byte *)(DAT_0209dd64 + iVar4);
    iVar4 = iVar4 + 1;
  } while (iVar4 < 0xd);
  iVar4 = 0;
  do {
    *(undefined *)(param_2 + iVar4) =
         (&DAT_02092370)[(int)(uint)*(byte *)(param_2 + iVar4) >> 4] << 4 |
         (&DAT_02092370)[*(byte *)(param_2 + iVar4) & 0xf];
    iVar4 = iVar4 + 1;
  } while (iVar4 < 0xd);
  iVar4 = 0;
  do {
    iVar2 = iVar4 + 6;
    *(byte *)(param_2 + iVar4) = *(byte *)(param_2 + iVar4) ^ *(byte *)(param_2 + iVar2);
    iVar1 = iVar4 + 9;
    iVar6 = iVar4 + 3;
    *(byte *)(param_2 + iVar6) = *(byte *)(param_2 + iVar6) ^ *(byte *)(param_2 + iVar1);
    *(byte *)(param_2 + iVar2) = *(byte *)(param_2 + iVar2) ^ *(byte *)(param_2 + iVar6);
    *(byte *)(param_2 + iVar1) = *(byte *)(param_2 + iVar1) ^ *(byte *)(param_2 + iVar4);
    *(byte *)(param_2 + 0xc) = *(byte *)(param_2 + 0xc) ^ *(byte *)(param_2 + iVar4);
    iVar4 = iVar4 + 1;
  } while (iVar4 < 3);
  return;
}

