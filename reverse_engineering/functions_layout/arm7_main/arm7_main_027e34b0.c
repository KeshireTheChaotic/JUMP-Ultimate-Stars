
void FUN_027e34b0(int param_1)

{
  short *psVar1;
  undefined2 *puVar2;
  int iVar3;
  short sVar4;
  int iVar5;
  bool bVar6;
  undefined2 local_2b0;
  undefined2 local_2ae;
  short local_2ac;
  undefined2 local_2aa;
  undefined1 auStack_290 [512];
  undefined1 auStack_90 [128];
  
  psVar1 = DAT_027f97f0;
  if (*DAT_027f97f0 == 2) {
    iVar5 = *(int *)(param_1 + 4);
    if (((uint)(ushort)DAT_027f97f0[0xfb] & (1 << ((ushort)DAT_027f97f0[0x8d] & 0xff)) >> 1) == 0) {
      puVar2 = (undefined2 *)FUN_03808074();
      *puVar2 = 8;
      puVar2[1] = 6;
      puVar2[4] = 0;
      FUN_038080d0();
    }
    else {
      DAT_027f97f0[0x73] = 1;
      psVar1[0xc4] = 0;
      OS_DisableInterrupts();
      psVar1[0xc1] = 0;
      psVar1[0x43] = 0;
      OS_RestoreInterrupts();
      psVar1[0xf7] = 1;
      iVar3 = FUN_027e0378(8,auStack_290);
      if (iVar3 != 0) {
        iVar3 = FUN_027e21d4(auStack_290);
        if (*(short *)(iVar3 + 4) == 0) {
          bVar6 = iVar5 != 0;
          iVar5 = FUN_027e2d1c(auStack_290,bVar6,0,1);
          if (*(short *)(iVar5 + 4) == 0) {
            psVar1[99] = (ushort)bVar6;
            MIi_CpuClear16(0,auStack_90,0x80);
            FUN_027e04c4(auStack_90,psVar1 + 0x74);
            MIi_CpuClear16(0,&local_2b0,0x20);
            local_2b0 = (undefined2)*(undefined4 *)(psVar1 + 0x78);
            local_2ae = (undefined2)((uint)*(undefined4 *)(psVar1 + 0x78) >> 0x10);
            local_2ac = psVar1[0x7a];
            local_2aa = 0;
            iVar5 = FUN_027e2980(auStack_290,0x20,&local_2b0,psVar1[0x80],2,psVar1[0x8d],3,3,
                                 psVar1[0x76] + 0x10,auStack_90);
            if (*(short *)(iVar5 + 4) == 0) {
              if (psVar1[0x7e] == 0) {
                sVar4 = 0;
              }
              else {
                sVar4 = 0x2a;
              }
              FUN_027e00b0(psVar1[0x8e] + sVar4);
              if (psVar1[0x7e] == 0) {
                sVar4 = 0;
              }
              else {
                sVar4 = 6;
              }
              FUN_027e0060(psVar1[0x8f] + sVar4);
              puVar2 = (undefined2 *)FUN_03808074();
              *psVar1 = 7;
              *puVar2 = 8;
              puVar2[1] = 0;
              puVar2[4] = 0;
              puVar2[0x16] = psVar1[0x18];
              puVar2[0x17] = psVar1[0x19];
              FUN_038080d0();
              psVar1[0x61] = 1;
            }
            else {
              FUN_027e346c(9);
            }
          }
          else {
            FUN_027e346c(1);
          }
        }
        else {
          FUN_027e346c(0x303);
        }
      }
    }
  }
  else {
    puVar2 = (undefined2 *)FUN_03808074();
    *puVar2 = 8;
    puVar2[1] = 3;
    puVar2[4] = 0;
    FUN_038080d0();
  }
  return;
}

