
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JUS-SDK CARDi_SetCardDma [behavioral] MIi_CardDmaCopy32 from the card data port, card command
   0xB7 (read page) | address, then starts ROMCTRL */

void CARDi_SetCardDma(void)

{
                    /* JUS-TAG hw={"CARD":1} io=["040001a4"] */
  MIi_CardDmaCopy32(DAT_020aecc8,&DAT_04100010,DAT_020aecc0,0x200);
  CARDi_SetRomOp(DAT_020aecbc >> 8 | 0xb7000000,DAT_020aecbc << 0x18);
  _DAT_040001a4 = DAT_020af2e4;
  return;
}

