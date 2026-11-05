
void FUN_0218fd14(undefined4 param_1,int param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_02190100();
  if ((puVar1 == (undefined4 *)0x0) || (*(char *)(puVar1 + 2) != '\x02')) {
    FUN_0218ff48(param_1,param_2,param_3,0);
    return;
  }
  FUN_02053008();
  puVar1[9] = (((int)(uint)*(ushort *)(param_2 + 4) >> 8 | (*(ushort *)(param_2 + 4) & 0xff) << 8)
               << 0x10 |
              (int)(uint)*(ushort *)(param_2 + 6) >> 8 | (*(ushort *)(param_2 + 6) & 0xff) << 8) + 1
  ;
  puVar1[0xc] = ((int)(uint)*(ushort *)(param_2 + 8) >> 8 | (*(ushort *)(param_2 + 8) & 0xff) << 8)
                << 0x10 | (int)(uint)*(ushort *)(param_2 + 10) >> 8 |
                          (*(ushort *)(param_2 + 10) & 0xff) << 8;
  *(ushort *)(puVar1 + 0xb) = *(ushort *)(param_2 + 0xe) >> 8 | *(ushort *)(param_2 + 0xe) << 8;
  FUN_021900a0(param_2,puVar1);
  FUN_02190024(puVar1,0);
  *(undefined1 *)(puVar1 + 2) = 4;
  if (puVar1[1] == 1) {
    puVar1[1] = 0;
    FUN_020531dc(*puVar1);
  }
  return;
}

