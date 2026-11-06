
/* JUS-SDK SND_IsChannelActive [behavioral] returns SOUNDxCNT bit 31 (byte +3 bit 7) */

bool SND_IsChannelActive(int param_1)

{
                    /* JUS-TAG hw={"SOUND":1} io=["04000403"] */
  return (*(byte *)(param_1 * 0x10 + 0x4000403) & 0x80) != 0;
}

