
void FUN_03803e20(void)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  
LAB_03803e44:
  bVar1 = false;
  uVar2 = OS_DisableInterrupts();
  do {
    if ((DAT_03809d7c & 4) == 0) {
      if ((DAT_03809d7c & 0x10) != 0) break;
    }
    else if ((DAT_03809d7c & 8) != 0) goto LAB_03803ea4;
    DAT_03809d6c = &DAT_03809cc8;
    FUN_037fc4dc(0);
  } while( true );
  DAT_03809d7c = DAT_03809d7c & 0xffffffef | 4;
  bVar1 = true;
LAB_03803ea4:
  OS_RestoreInterrupts(uVar2);
  if (!bVar1) {
    (*DAT_03809cc4)(&DAT_03809c80);
    goto LAB_03803e44;
  }
  *DAT_03809c80 = 0;
  if ((DAT_03809c80[0x13] & 1 << (DAT_03809c84 & 0xff)) == 0) {
    *DAT_03809c80 = 3;
  }
  switch(DAT_03809c84) {
  case 0:
    break;
  case 1:
    break;
  case 2:
    FUN_03803760();
    break;
  case 3:
    uVar2 = CARDi_ReadRomIDCore();
    DAT_03809c80[2] = uVar2;
    break;
  case 4:
    *DAT_03809c80 = 3;
    break;
  case 5:
  default:
switchD_03803edc_default:
    *DAT_03809c80 = 3;
    break;
  case 6:
    FUN_038036f0(DAT_03809c80[3],DAT_03809c80[4],DAT_03809c80[5]);
    break;
  case 7:
    FUN_03803568(DAT_03809c80[4],DAT_03809c80[3],DAT_03809c80[5]);
    break;
  case 8:
    FUN_0380362c(DAT_03809c80[4],DAT_03809c80[3],DAT_03809c80[5]);
    break;
  case 9:
    FUN_038034c0(DAT_03809c80[4],DAT_03809c80[3],DAT_03809c80[5]);
    break;
  case 10:
    goto switchD_03803edc_default;
  case 0xb:
    FUN_0380342c(DAT_03809c80[4],DAT_03809c80[5]);
    break;
  case 0xc:
    FUN_038033d4();
  }
  do {
    iVar3 = FUN_037fe9ec(0xb,1,1);
  } while (iVar3 < 0);
  uVar2 = OS_DisableInterrupts();
  DAT_03809d7c = DAT_03809d7c & 0xffffffb3;
  FUN_037fc460(&DAT_03809d74);
  if ((DAT_03809d7c & 0x10) != 0) {
    FUN_037fc42c(&DAT_03809cc8);
  }
  OS_RestoreInterrupts(uVar2);
  goto LAB_03803e44;
}

