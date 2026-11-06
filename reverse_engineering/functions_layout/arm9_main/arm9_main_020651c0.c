
/* JUS-SDK disableBankForX_ [behavioral] clears the field it is given and writes 0 (disabled) to the
   VRAMCNT of every bank that was in it */

ushort disableBankForX_(ushort *param_1)

{
  ushort uVar1;
  
                    /* JUS-TAG hw={"VRAMCNT":9}
                       io=["04000240","04000241","04000242","04000243","04000244","04000245","04000246","04000248","04000249"]
                        */
  uVar1 = *param_1;
  *param_1 = 0;
  if ((uVar1 & 1) != 0) {
    DAT_04000240 = 0;
  }
  if ((uVar1 & 2) != 0) {
    DAT_04000241 = 0;
  }
  if ((uVar1 & 4) != 0) {
    DAT_04000242 = 0;
  }
  if ((uVar1 & 8) != 0) {
    DAT_04000243 = 0;
  }
  if ((uVar1 & 0x10) != 0) {
    DAT_04000244 = 0;
  }
  if ((uVar1 & 0x20) != 0) {
    DAT_04000245 = 0;
  }
  if ((uVar1 & 0x40) != 0) {
    DAT_04000246 = 0;
  }
  if ((uVar1 & 0x80) != 0) {
    DAT_04000248 = 0;
  }
  if ((uVar1 & 0x100) != 0) {
    DAT_04000249 = 0;
  }
  FUN_020554cc(uVar1,DAT_020afb98);
  return uVar1;
}

