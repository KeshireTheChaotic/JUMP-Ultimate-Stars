
void FUN_03802d6c(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *local_38;
  undefined4 *local_34;
  undefined4 local_30;
  int *local_2c;
  uint local_28;
  uint local_24;
  uint local_20;
  
  while (iVar1 = FUN_037fcbcc(&DAT_03809c28,&local_38,0), iVar1 != 0) {
    puVar2 = local_38;
    while (puVar2 != (undefined4 *)0x0) {
      local_34 = (undefined4 *)*puVar2;
      local_30 = puVar2[1];
      local_2c = (int *)puVar2[2];
      local_28 = puVar2[3];
      local_24 = puVar2[4];
      local_20 = puVar2[5];
      switch(local_30) {
      case 0:
        FUN_03802188(local_2c,local_28,local_24,local_20);
        break;
      case 1:
        FUN_0380212c(local_2c);
        break;
      case 2:
        FUN_038021c4(local_2c,local_28,local_24,local_20);
        break;
      case 3:
        FUN_038021a4(local_2c);
        break;
      case 4:
        FUN_038020a8(local_2c,local_28);
        break;
      case 5:
        FUN_03801fdc(local_2c,local_28);
        break;
      case 6:
        FUN_03801da8(local_2c,local_28,local_24,local_20);
        break;
      case 7:
        FUN_03801d04((uint)local_2c & 0xffffff,local_28,local_24,local_20,(uint)local_2c >> 0x18);
        break;
      case 8:
        FUN_03801f68(local_2c,local_28,local_24);
        break;
      case 9:
        FUN_03801ef0(local_2c,local_28,local_24);
        break;
      case 10:
        FUN_03802814(local_2c,local_28,(int)(short)local_24);
        break;
      case 0xb:
        FUN_038027f8(local_2c,(int)(short)local_28);
        break;
      case 0xc:
        FUN_03802b24(local_2c,local_28,local_24,local_20);
        break;
      case 0xd:
        FUN_03802a60(local_2c,local_28,local_24,local_20);
        break;
      case 0xe:
        SND_SetupChannelPcm((uint)local_2c & 0xffff,local_28 & 0x7ffffff,local_20 >> 0x18 & 3,
                            local_20 >> 0x1a & 3,local_20 & 0xffff,local_24 & 0x3fffff,
                            local_24 >> 0x18 & 0x7f,local_24 >> 0x16 & 3,(uint)local_2c >> 0x10,
                            local_20 >> 0x10 & 0x7f);
        break;
      case 0xf:
        SND_SetupChannelPsg(local_2c,local_20,local_28 & 0x7f,local_28 >> 8 & 3,
                            local_24 >> 8 & 0xffff,local_24 & 0x7f);
        break;
      case 0x10:
        SND_SetupChannelNoise
                  (local_2c,local_28 & 0x7f,local_28 >> 8 & 3,local_24 >> 8 & 0xffff,local_24 & 0x7f
                  );
        break;
      case 0x11:
        FUN_037ff7e8(local_24 >> 0x1f,local_24 >> 0x1e & 1,local_2c,local_28,local_24 >> 0x1d & 1,
                     local_24 >> 0x1c & 1,local_24 >> 0x1b & 1);
        break;
      case 0x12:
        FUN_0380296c(local_2c,local_28,0,local_24,0,local_20);
        break;
      case 0x13:
        FUN_03802cb8(local_2c,local_28);
        break;
      case 0x14:
        FUN_03802c60(local_2c,local_28,local_24);
        break;
      case 0x15:
        FUN_03802c18(local_2c,local_28);
        break;
      case 0x16:
        FUN_037feef8(local_2c);
        break;
      case 0x17:
        SND_SetMasterVolume(local_2c);
        break;
      case 0x18:
        FUN_037fef6c(local_2c);
        break;
      case 0x19:
        SND_SetOutputSelector(local_2c,local_28,local_24,local_20);
        break;
      case 0x1a:
        FUN_037ffcd0(local_2c,local_28);
        break;
      case 0x1b:
        FUN_037ffc94(local_2c,local_28);
        break;
      case 0x1c:
        FUN_037ffdc8(local_2c,local_28);
        break;
      case 0x1d:
        DAT_03808aa4 = local_2c;
        break;
      case 0x1e:
        FUN_03801e54(local_2c,local_28);
        break;
      case 0x1f:
        FUN_03801df4(local_2c,local_28);
        break;
      case 0x20:
        FUN_037ffbec(local_2c,local_28);
        break;
      case 0x21:
        FUN_038029f4(local_2c);
      }
      puVar2 = local_34;
    }
    *DAT_03808aa4 = *DAT_03808aa4 + 1;
  }
  return;
}

