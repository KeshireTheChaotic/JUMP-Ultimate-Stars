
void FUN_02161470(void)

{
  int iVar1;
  
  if ((DAT_0216df6c & 1) == 0) {
    FUN_0214dc98(&DAT_0216cbe8,0,0x1c,0xff,0xac);
    DAT_0216df6c = DAT_0216df6c | 1;
  }
  iVar1 = FUN_0203b3f4();
  iVar1 = *(int *)(*(int *)(iVar1 + 0x88) + 4);
  *(undefined1 *)(iVar1 + 0x901) = 1;
  *(undefined2 *)(iVar1 + 0x8d8) = DAT_0216cbe8;
  *(undefined2 *)(iVar1 + 0x8da) = DAT_0216cbea;
  *(undefined2 *)(iVar1 + 0x8dc) = DAT_0216cbec;
  *(undefined2 *)(iVar1 + 0x8de) = DAT_0216cbee;
  iVar1 = FUN_0203b3f4();
  iVar1 = *(int *)(*(int *)(iVar1 + 0x88) + 4);
  *(undefined1 *)(iVar1 + 0x901) = 1;
  *(undefined4 *)(iVar1 + 0x8c8) = 0x1f;
  iVar1 = FUN_0203b3f4();
  iVar1 = *(int *)(*(int *)(iVar1 + 0x88) + 4);
  *(undefined1 *)(iVar1 + 0x901) = 1;
  *(undefined4 *)(iVar1 + 0x8d4) = 0x1b;
  iVar1 = FUN_0203b3f4();
  FUN_021500b0(*(undefined4 *)(iVar1 + 0x88),0,1);
  iVar1 = FUN_0203b3f4();
  iVar1 = *(int *)(*(int *)(iVar1 + 0x88) + 4);
  *(undefined1 *)(iVar1 + 0x901) = 1;
  *(undefined1 *)(iVar1 + 0x8fd) = 1;
  iVar1 = FUN_0203b3f4();
  iVar1 = *(int *)(*(int *)(iVar1 + 0x88) + 4);
  *(undefined1 *)(iVar1 + 0x8ff) = 1;
  *(undefined1 *)(iVar1 + 0x901) = 1;
  return;
}

