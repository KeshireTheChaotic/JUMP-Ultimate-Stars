
void FUN_02190304(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  int iVar5;
  
  uVar1 = OS_DisableInterrupts();
  iVar5 = DAT_020aab7c;
  do {
    if (iVar5 == 0) {
LAB_021903a2:
      OS_RestoreInterrupts(uVar1);
      return;
    }
    puVar4 = *(uint **)(iVar5 + 0xa4);
    if ((((puVar4 != (uint *)0x0) && (*puVar4 != 0)) && ((char)puVar4[2] == '\v')) &&
       ((((*puVar4 & 0xffff) == (uint)*(ushort *)(param_2 + 4) &&
         (*(short *)((int)puVar4 + 10) == *(short *)(param_2 + 6))) &&
        ((puVar4[0x11] == 0 &&
         (uVar3 = (uint)*(ushort *)(param_1 + 0xe) << 8,
         puVar4[7] ==
         (((int)(uint)*(ushort *)(param_1 + 0xc) >> 8 | (*(ushort *)(param_1 + 0xc) & 0xff) << 8) <<
          0x10 | (int)(uint)*(ushort *)(param_1 + 0xe) >> 8 | uVar3 & 0xffff))))))) {
      uVar2 = param_3 - 8;
      if (puVar4[0xf] < uVar2) {
        puVar4[0x11] = puVar4[0xf];
      }
      else {
        puVar4[0x11] = uVar2;
      }
      FUN_02051890(param_2 + 8,puVar4[0x10],puVar4[0x11],uVar3,uVar2);
      if (puVar4[1] == 3) {
        puVar4[1] = 0;
        FUN_020531dc(*puVar4);
      }
      goto LAB_021903a2;
    }
    iVar5 = *(int *)(iVar5 + 0x68);
  } while( true );
}

