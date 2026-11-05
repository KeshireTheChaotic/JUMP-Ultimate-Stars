
void FUN_021bcbb0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  
  piVar1 = *(int **)(*(int *)(*(int *)(param_1 + 0x1c) + 4) + 100);
  (**(code **)(*piVar1 + 0x60))
            (piVar1,*(short *)(param_1 + 0x58) + -3,(int)*(short *)(param_1 + 0x5a),
             *(undefined4 *)
              (u_>__7__021d0128 + ((int)(uint)*(byte *)(param_1 + 0x9b) >> 1 & 3U) * 2 + 4),0xf,0,0,
             param_4);
  *(char *)(param_1 + 0x9b) = *(char *)(param_1 + 0x9b) + '\x01';
  return;
}

