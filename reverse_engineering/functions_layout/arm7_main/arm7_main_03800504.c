
void FUN_03800504(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  do {
    iVar2 = iVar3 * 0x54;
    if ((byte)(&DAT_03808aab)[iVar2] >> 3 != 0) {
      if (((byte)(&DAT_03808aab)[iVar2] >> 3 & 2) != 0) {
        SND_StopChannel(iVar3,0);
      }
      if (((byte)(&DAT_03808aab)[iVar2] >> 3 & 1) == 0) {
        if (((byte)(&DAT_03808aab)[iVar2] >> 3 & 4) != 0) {
          SND_SetChannelTimer(iVar3,(&DAT_03808ace)[iVar3 * 0x2a]);
        }
        if (((byte)(&DAT_03808aab)[iVar2] >> 3 & 8) != 0) {
          FUN_037ff080(iVar3,(&DAT_03808acc)[iVar3 * 0x2a] & 0xff);
        }
        if (((byte)(&DAT_03808aab)[iVar2] >> 3 & 0x10) != 0) {
          FUN_037fefec(iVar3,(&DAT_03808acb)[iVar2]);
        }
      }
      else {
        cVar1 = (&DAT_03808aa9)[iVar2];
        if (cVar1 == '\0') {
          SND_SetupChannelPcm(iVar3,(&DAT_03808aec)[iVar3 * 0x15]);
        }
        else if (cVar1 == '\x01') {
          SND_SetupChannelPsg(iVar3,(&DAT_03808aec)[iVar3 * 0x15],
                              (ushort)(&DAT_03808acc)[iVar3 * 0x2a] & 0xff,
                              (int)(uint)(ushort)(&DAT_03808acc)[iVar3 * 0x2a] >> 8,
                              (&DAT_03808ace)[iVar3 * 0x2a],(&DAT_03808acb)[iVar2]);
        }
        else if (cVar1 == '\x02') {
          SND_SetupChannelNoise
                    (iVar3,(ushort)(&DAT_03808acc)[iVar3 * 0x2a] & 0xff,
                     (int)(uint)(ushort)(&DAT_03808acc)[iVar3 * 0x2a] >> 8,
                     (&DAT_03808ace)[iVar3 * 0x2a],(&DAT_03808acb)[iVar2]);
        }
      }
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 0x10);
  iVar3 = 0;
  do {
    iVar2 = iVar3 * 0x54;
    if ((byte)(&DAT_03808aab)[iVar2] >> 3 != 0) {
      if (((byte)(&DAT_03808aab)[iVar2] >> 3 & 1) != 0) {
        *(byte *)(iVar3 * 0x10 + 0x4000403) = *(byte *)(iVar3 * 0x10 + 0x4000403) | 0x80;
      }
      (&DAT_03808aab)[iVar2] = (&DAT_03808aab)[iVar2] & 7;
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 0x10);
  return;
}

